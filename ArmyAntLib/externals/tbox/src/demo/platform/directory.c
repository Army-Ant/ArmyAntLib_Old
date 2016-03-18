/* //////////////////////////////////////////////////////////////////////////////////////
 * includes
 */
#include "../demo.h"

/* ////////////////////////////////////////////////////////////////////////////////////////////////////
 * callback
 */ 
#if 1
static tb_bool_t tb_directory_walk_func(tb_char_t const* path, tb_file_info_t const* info, tb_cpointer_t priv)
{
    // check
    tb_assert_and_check_return_val(path && info, tb_false);

    // the modified time
    tb_tm_t mtime = {0};
    tb_localtime(info->mtime, &mtime);

    // trace
    tb_trace_i( "path[%c]: %s, size: %llu, mtime: %04ld-%02ld-%02ld %02ld:%02ld:%02ld"
            , info->type == TB_FILE_TYPE_DIRECTORY? 'd' : 'f'
            , path
            , info->size
            , mtime.year
            , mtime.month
            , mtime.mday
            , mtime.hour
            , mtime.minute
            , mtime.second);

    // continue 
    return tb_true;
}
#endif

/* //////////////////////////////////////////////////////////////////////////////////////
 * main
 */ 
tb_int_t tb_demo_platform_directory_main(tb_int_t argc, tb_char_t** argv)
{
#if 0
    // home
    tb_char_t home[TB_PATH_MAXN] = {0};
    if (tb_directory_home(home, sizeof(home))) tb_trace_i("home: %s", home);

    // current
    tb_char_t current[TB_PATH_MAXN] = {0};
    if (tb_directory_current(current, sizeof(current))) tb_trace_i("current: %s", current);

    // temporary
    tb_char_t temporary[TB_PATH_MAXN] = {0};
    if (tb_directory_temporary(temporary, sizeof(temporary))) tb_trace_i("temporary: %s", temporary);
#elif 0

    // current
    tb_char_t current[TB_PATH_MAXN] = {0};
    if (tb_directory_current(current, sizeof(current))) tb_trace_i("current: %s", current);

    // current
    tb_directory_walk(argv[1]? argv[1] : current, tb_true, tb_true, tb_directory_walk_func, tb_null);
#elif 0
    tb_directory_remove(argv[1]);
#elif 0
    tb_directory_copy(argv[1], argv[2]);
#else
    tb_directory_walk(argv[1], tb_true, tb_true, tb_directory_walk_func, tb_null);
#endif

    return 0;
}