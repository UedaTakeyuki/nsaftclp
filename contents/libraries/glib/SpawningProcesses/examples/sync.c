#include <glib.h>
#include <stdio.h>

void main(){
  gchar *argv[] = { "ps", "-aef", NULL };
  gchar *output = NULL; // will contain command output
  GError *error = NULL;
  int exit_status = 0;

  // g_spawn_sync
  if (!g_spawn_sync(NULL, argv, NULL, G_SPAWN_SEARCH_PATH, NULL, NULL, 
                    &output, NULL, &exit_status, &error))
  {
    g_error("%s.\n", error->message);
    g_free(error);
  } else {
    g_message("status: %d", exit_status);
    printf("result: %hs", output);
    g_free(output);
  } 

  // g_spawn_command_line_sync
  if (!g_spawn_command_line_sync("ls", &output, NULL, &exit_status, &error))
  {
    g_error("%s.\n", error->message);
    g_free(error);
  } else {
    g_message("status: %d", exit_status);
    printf("result: %hs", output);
    g_free(output);
  } 

}
