#include <glib.h>
#include <json-glib/json-glib.h>
#include "jsonpath.h"
#include "parseronly.h"
#include "reader.h"

void main(){
  // JSON string to parse
  gchar * json_str = "{\"data\":{\"enabled\":true,\"product_link\":\"KEROC\",\"license_key\":\"KERO5-KEROB-KERO5-KEROS\",\"buyer_email\":\"kerokero@kerokero.com\",\"uses\":27,\"date\":\"2023-08-23T00:43:35+00:00\"}}";

  // parse & dump with jsonpath
  jsonpath(json_str);

  // parse & dump with reader
  reader(json_str);

  // parse without jsonpath nor reader & dump
  parser_only(json_str);
}