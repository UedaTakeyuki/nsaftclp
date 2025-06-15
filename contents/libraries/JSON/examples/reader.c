#include <stdio.h>
#include <json-glib/json-glib.h>
#include <stdbool.h>
#include <inttypes.h> // for PRId64, https://stackoverflow.com/a/9225648

void reader(gchar *data){
        // parse response as Json data
    JsonParser *parser = json_parser_new ();
    GError *error;

    g_print("\n JSON Reader\n\n");

    if (!json_parser_load_from_data(parser, data, -1, &error)){
        g_warning ("Error at parsing JSON: %s", error->message);
        g_error_free (error);
    } else {
        g_autoptr(JsonReader) reader = json_reader_new (json_parser_get_root (parser));

        // read data
        json_reader_read_member (reader, "data");

        // read data.enabled
        json_reader_read_member (reader, "enabled");
        const bool enabled = json_reader_get_boolean_value(reader);
        printf("enabled: %s\n",(enabled ? "true" : "false"));
        json_reader_end_member (reader);

        // read data.product_link
        json_reader_read_member (reader, "product_link");
        const char *product_link = json_reader_get_string_value (reader);
        printf("product_link: %s\n",product_link);
        json_reader_end_member (reader);

        // read data.license_key
        json_reader_read_member (reader, "license_key");
        const char *license_key = json_reader_get_string_value (reader);
        printf("license_key: %s\n",license_key);
        json_reader_end_member (reader);

        // read data.buyer_email
        json_reader_read_member (reader, "buyer_email");
        const char *buyer_email = json_reader_get_string_value (reader);
        printf("buyer_email: %s\n",buyer_email);
        json_reader_end_member (reader);

        // read data.uses
        json_reader_read_member (reader, "uses");
        const gint64 uses = json_reader_get_int_value (reader);
        printf("uses: %" PRId64 "\n",uses);
        json_reader_end_member (reader);

        // read data.date
        json_reader_read_member (reader, "date");
        const char *date = json_reader_get_string_value (reader);
        printf("date: %s\n",date);
        json_reader_end_member (reader);

        // end data
        json_reader_end_member (reader);
    }
}
