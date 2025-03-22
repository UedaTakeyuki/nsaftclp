#include <glib.h>
#include <locale.h>

static void
test_1_1 (void)
{
  GError *error = NULL;
  g_assert_no_error (error);
}

int
main (int argc, char *argv[])
{
  setlocale (LC_ALL, "");

  g_test_init (&argc, &argv, NULL);

  // Define the tests.
  g_test_add_func ("/test/1/1", test_1_1);

  return g_test_run ();
}
