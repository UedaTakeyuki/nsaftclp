#include <libsoup/soup.h>

int main (int argc, char **argv)
{
    SoupSession *session = soup_session_new ();
    SoupMessageHeaders *response_headers;
    const char *content_type;
    SoupMessage *msg = soup_message_new (SOUP_METHOD_GET, "http://0.0.0.0:8080");

    // add Debug log
    SoupLogger* logger = soup_logger_new(SOUP_LOGGER_LOG_BODY);
    soup_session_add_feature(session, SOUP_SESSION_FEATURE(logger));

    // call send_and_read
    GError *error = NULL;
    GBytes *bytes = soup_session_send_and_read (
        session,
        msg,
        NULL, // Pass a GCancellable here if you want to cancel a download
        &error);

    if (error) {
        g_printerr ("Failed to download: %s\n", error->message);
        g_error_free (error);
        g_object_unref (msg);
        g_object_unref (session);
        return 1;
    }

    // parse response
    response_headers = soup_message_get_response_headers (msg);
    content_type = soup_message_headers_get_content_type (response_headers, NULL);
    gconstpointer response_body = g_bytes_get_data(bytes, NULL);


    // print size, type, and body
    g_print ("Downloaded bytes: %zu\ntype: %s\nresponse_body: %s\n",
             g_bytes_get_size (bytes), content_type, response_body);

    // unref resources
    g_bytes_unref (bytes);
    g_object_unref (msg);
    g_object_unref (session);

    // exit without error
    return 0;
}
