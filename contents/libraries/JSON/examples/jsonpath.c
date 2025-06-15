#include <stdio.h>
#include <json-glib/json-glib.h>
#include <stdbool.h>
#include <inttypes.h> // for PRId64, https://stackoverflow.com/a/9225648


JsonNode *jsonpath_get_node(JsonPath *path, gchar *path_str, JsonParser * parser){
    json_path_compile (path, path_str, NULL);
    JsonNode *result = json_path_match (path, json_parser_get_root (parser));
    g_print("Node type %d\n", json_node_get_node_type(result));
    JsonArray* array = json_node_get_array(result);
    JsonNode* node = json_array_get_element (array, 0);
    return node;
}

void jsonpath(gchar *data){
      // parse response as Json data
    JsonParser *parser = json_parser_new ();
    GError *error;

    g_print("\n JSON Path\n\n");

    if (!json_parser_load_from_data(parser, data, -1, &error)){
        g_warning ("Error at parsing JSON: %s", error->message);
        g_error_free (error);
    } else {
        JsonNode *result;
        JsonPath *path = json_path_new ();

        // read data.enabled
        JsonNode* node_enabled = jsonpath_get_node(path, "$.data.enabled", parser);
        g_print("$.data.enabled: %s\n", (json_node_get_boolean(node_enabled)? "true" : "false"));

        // $.data.product_link
        JsonNode* node_product_link = jsonpath_get_node(path, "$.data.product_link", parser);
        g_print("$.data.product_link: %s\n", json_node_get_string(node_product_link));

        // $.data.license_key
        JsonNode* node_license_key = jsonpath_get_node(path, "$.data.license_key", parser);
        g_print("$.data.license_key: %s\n", json_node_get_string(node_license_key));

        // read data.buyer_email
        JsonNode* node_buyer_email = jsonpath_get_node(path, "$.data.buyer_email", parser);
        g_print("$.data.buyer_email: %s\n", json_node_get_string(node_buyer_email));

        // read data.uses
        JsonNode* node_uses = jsonpath_get_node(path, "$.data.uses", parser);
        g_print("type of .data.uses: %s\n", json_node_type_name(node_uses));
        g_print("$.data.uses: %" PRId64 "\n", json_node_get_int(node_uses));

        // read data.date
        JsonNode* node_date = jsonpath_get_node(path, "$.data.date", parser);
        g_print("$.data.date: %s\n", json_node_get_string(node_date));
    }
}