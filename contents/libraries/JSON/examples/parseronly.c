#include <stdio.h>
#include <json-glib/json-glib.h>
#include <stdbool.h>
#include <inttypes.h> // for PRId64, https://stackoverflow.com/a/9225648

void parser_only(gchar *data) {
    // parse response as Json data
    JsonParser *parser = json_parser_new ();
    GError *error;

    g_print("\n Parser only\n\n");

    if (!json_parser_load_from_data(parser, data, -1, &error)){
        g_warning ("Error at parsing JSON: %s", error->message);
        g_error_free (error);
    } else {
        // get root node
        JsonNode* root = json_parser_get_root (parser);
        g_print("Node type %d\n", json_node_get_node_type(root)); // type 0: Object

        // get root object
        JsonObject* root_obj = json_node_get_object (root);

        // get data node from root object
        JsonNode* data = json_object_get_member (root_obj, "data");
        g_print("Node type %d\n", json_node_get_node_type(data)); // type 0: Object
        // get data object from node
        JsonObject* data_obj =json_node_get_object (data);

        /////////////////////
        // data.enabled
        /////////////////////
        JsonNode* enabled = json_object_get_member (data_obj, "enabled");
        g_print("Node type %d\n", json_node_get_node_type(enabled)); // type 2: Value
        // get license_key value
        const bool enabled_val = json_node_get_boolean (enabled);
        g_print("$.data.license_key: %s\n", (enabled ? "true" : "false"));

        //////////////////////////
        // read data.product_link
        //////////////////////////
        JsonNode* product_link = json_object_get_member (data_obj, "product_link");
        g_print("Node type %d\n", json_node_get_node_type(product_link)); // type 2: Value
        const gchar* product_link_str = json_node_get_string (product_link);
        g_print("$.data.product_link: %s\n", product_link_str);

        //////////////////////////
        // data.license_key
        //////////////////////////
        JsonNode* license_key = json_object_get_member (data_obj, "license_key");
        g_print("Node type %d\n", json_node_get_node_type(license_key)); // type 2: Value
        const gchar* license_key_str = json_node_get_string (license_key);
        g_print("$.data.license_key: %s\n", license_key_str);

        //////////////////////////
        // read data.buyer_email
        //////////////////////////
        JsonNode* buyer_email = json_object_get_member (data_obj, "buyer_email");
        g_print("Node type %d\n", json_node_get_node_type(buyer_email)); // type 2: Value
        const gchar* buyer_email_str = json_node_get_string (buyer_email);
        g_print("$.data.product_link: %s\n", buyer_email_str);

        //////////////////////////
        // read data.uses
        //////////////////////////
        JsonNode* uses = json_object_get_member (data_obj, "uses");
        g_print("Node type %d\n", json_node_get_node_type(uses)); // type 2: Value
        const gint64 uses_val = json_node_get_int (uses);
        g_print("$.data.uses: %" PRId64 "\n", uses_val);

        //////////////////////////
        // read data.date
        //////////////////////////
        JsonNode* date = json_object_get_member (data_obj, "date");
        g_print("Node type %d\n", json_node_get_node_type(product_link)); // type 2: Value
        const gchar* date_str = json_node_get_string (date);
        g_print("$.data.date: %s\n", date_str);

    }
}