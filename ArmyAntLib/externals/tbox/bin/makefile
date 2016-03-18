all:  tbox demo

.PHONY: all  tbox demo

tbox: build/tbox.lib
build/tbox.lib: build\.objs\tbox\src\tbox\tbox.obj build\.objs\tbox\src\tbox\math\fixed16.obj build\.objs\tbox\src\tbox\math\impl\random_linear.obj build\.objs\tbox\src\tbox\math\int32.obj build\.objs\tbox\src\tbox\math\math.obj build\.objs\tbox\src\tbox\math\random.obj build\.objs\tbox\src\tbox\libc\libc.obj build\.objs\tbox\src\tbox\libc\misc\time\gmmktime.obj build\.objs\tbox\src\tbox\libc\misc\time\gmtime.obj build\.objs\tbox\src\tbox\libc\misc\time\localtime.obj build\.objs\tbox\src\tbox\libc\misc\time\mktime.obj build\.objs\tbox\src\tbox\libc\misc\time\time.obj build\.objs\tbox\src\tbox\libc\stdio\printf.obj build\.objs\tbox\src\tbox\libc\stdio\printf_object.obj build\.objs\tbox\src\tbox\libc\stdio\puts.obj build\.objs\tbox\src\tbox\libc\stdio\snprintf.obj build\.objs\tbox\src\tbox\libc\stdio\sprintf.obj build\.objs\tbox\src\tbox\libc\stdio\swprintf.obj build\.objs\tbox\src\tbox\libc\stdio\vsnprintf.obj build\.objs\tbox\src\tbox\libc\stdio\vswprintf.obj build\.objs\tbox\src\tbox\libc\stdio\wprintf.obj build\.objs\tbox\src\tbox\libc\stdio\wputs.obj build\.objs\tbox\src\tbox\libc\stdlib\mbstowcs.obj build\.objs\tbox\src\tbox\libc\stdlib\random.obj build\.objs\tbox\src\tbox\libc\stdlib\stdlib.obj build\.objs\tbox\src\tbox\libc\stdlib\wcstombs.obj build\.objs\tbox\src\tbox\libc\string\memcmp.obj build\.objs\tbox\src\tbox\libc\string\memcpy.obj build\.objs\tbox\src\tbox\libc\string\memdup.obj build\.objs\tbox\src\tbox\libc\string\memmem.obj build\.objs\tbox\src\tbox\libc\string\memmov.obj build\.objs\tbox\src\tbox\libc\string\memset.obj build\.objs\tbox\src\tbox\libc\string\strcat.obj build\.objs\tbox\src\tbox\libc\string\strchr.obj build\.objs\tbox\src\tbox\libc\string\strcmp.obj build\.objs\tbox\src\tbox\libc\string\strcpy.obj build\.objs\tbox\src\tbox\libc\string\strdup.obj build\.objs\tbox\src\tbox\libc\string\strichr.obj build\.objs\tbox\src\tbox\libc\string\stricmp.obj build\.objs\tbox\src\tbox\libc\string\strirchr.obj build\.objs\tbox\src\tbox\libc\string\strirstr.obj build\.objs\tbox\src\tbox\libc\string\stristr.obj build\.objs\tbox\src\tbox\libc\string\strlcpy.obj build\.objs\tbox\src\tbox\libc\string\strlen.obj build\.objs\tbox\src\tbox\libc\string\strncat.obj build\.objs\tbox\src\tbox\libc\string\strncmp.obj build\.objs\tbox\src\tbox\libc\string\strncpy.obj build\.objs\tbox\src\tbox\libc\string\strndup.obj build\.objs\tbox\src\tbox\libc\string\strnicmp.obj build\.objs\tbox\src\tbox\libc\string\strnirchr.obj build\.objs\tbox\src\tbox\libc\string\strnirstr.obj build\.objs\tbox\src\tbox\libc\string\strnistr.obj build\.objs\tbox\src\tbox\libc\string\strnlen.obj build\.objs\tbox\src\tbox\libc\string\strnrchr.obj build\.objs\tbox\src\tbox\libc\string\strnrstr.obj build\.objs\tbox\src\tbox\libc\string\strnstr.obj build\.objs\tbox\src\tbox\libc\string\strrchr.obj build\.objs\tbox\src\tbox\libc\string\strrstr.obj build\.objs\tbox\src\tbox\libc\string\strstr.obj build\.objs\tbox\src\tbox\libc\string\wcscat.obj build\.objs\tbox\src\tbox\libc\string\wcschr.obj build\.objs\tbox\src\tbox\libc\string\wcscmp.obj build\.objs\tbox\src\tbox\libc\string\wcscpy.obj build\.objs\tbox\src\tbox\libc\string\wcsdup.obj build\.objs\tbox\src\tbox\libc\string\wcsichr.obj build\.objs\tbox\src\tbox\libc\string\wcsicmp.obj build\.objs\tbox\src\tbox\libc\string\wcsirchr.obj build\.objs\tbox\src\tbox\libc\string\wcsirstr.obj build\.objs\tbox\src\tbox\libc\string\wcsistr.obj build\.objs\tbox\src\tbox\libc\string\wcslcpy.obj build\.objs\tbox\src\tbox\libc\string\wcslen.obj build\.objs\tbox\src\tbox\libc\string\wcsncat.obj build\.objs\tbox\src\tbox\libc\string\wcsncmp.obj build\.objs\tbox\src\tbox\libc\string\wcsncpy.obj build\.objs\tbox\src\tbox\libc\string\wcsndup.obj build\.objs\tbox\src\tbox\libc\string\wcsnicmp.obj build\.objs\tbox\src\tbox\libc\string\wcsnirchr.obj build\.objs\tbox\src\tbox\libc\string\wcsnirstr.obj build\.objs\tbox\src\tbox\libc\string\wcsnlen.obj build\.objs\tbox\src\tbox\libc\string\wcsnrchr.obj build\.objs\tbox\src\tbox\libc\string\wcsnrstr.obj build\.objs\tbox\src\tbox\libc\string\wcsrchr.obj build\.objs\tbox\src\tbox\libc\string\wcsrstr.obj build\.objs\tbox\src\tbox\libc\string\wcsstr.obj build\.objs\tbox\src\tbox\utils\adler32.obj build\.objs\tbox\src\tbox\utils\base32.obj build\.objs\tbox\src\tbox\utils\base64.obj build\.objs\tbox\src\tbox\utils\bits.obj build\.objs\tbox\src\tbox\utils\crc.obj build\.objs\tbox\src\tbox\utils\dump.obj build\.objs\tbox\src\tbox\utils\fnv32.obj build\.objs\tbox\src\tbox\utils\lock_profiler.obj build\.objs\tbox\src\tbox\utils\md5.obj build\.objs\tbox\src\tbox\utils\sha.obj build\.objs\tbox\src\tbox\utils\singleton.obj build\.objs\tbox\src\tbox\utils\trace.obj build\.objs\tbox\src\tbox\utils\url.obj build\.objs\tbox\src\tbox\utils\used.obj build\.objs\tbox\src\tbox\prefix\state.obj build\.objs\tbox\src\tbox\memory\allocator.obj build\.objs\tbox\src\tbox\memory\buffer.obj build\.objs\tbox\src\tbox\memory\default_allocator.obj build\.objs\tbox\src\tbox\memory\fixed_pool.obj build\.objs\tbox\src\tbox\memory\impl\native_large_allocator.obj build\.objs\tbox\src\tbox\memory\impl\prefix.obj build\.objs\tbox\src\tbox\memory\impl\static_fixed_pool.obj build\.objs\tbox\src\tbox\memory\impl\static_large_allocator.obj build\.objs\tbox\src\tbox\memory\large_allocator.obj build\.objs\tbox\src\tbox\memory\memory.obj build\.objs\tbox\src\tbox\memory\native_allocator.obj build\.objs\tbox\src\tbox\memory\queue_buffer.obj build\.objs\tbox\src\tbox\memory\small_allocator.obj build\.objs\tbox\src\tbox\memory\static_allocator.obj build\.objs\tbox\src\tbox\memory\static_buffer.obj build\.objs\tbox\src\tbox\memory\string_pool.obj build\.objs\tbox\src\tbox\string\static_string.obj build\.objs\tbox\src\tbox\string\string.obj build\.objs\tbox\src\tbox\stream\filter.obj build\.objs\tbox\src\tbox\stream\impl\filter\cache.obj build\.objs\tbox\src\tbox\stream\impl\stream\data.obj build\.objs\tbox\src\tbox\stream\impl\stream\file.obj build\.objs\tbox\src\tbox\stream\impl\stream\filter.obj build\.objs\tbox\src\tbox\stream\static_stream.obj build\.objs\tbox\src\tbox\stream\stream.obj build\.objs\tbox\src\tbox\stream\transfer.obj build\.objs\tbox\src\tbox\algorithm\binary_find.obj build\.objs\tbox\src\tbox\algorithm\binary_find_if.obj build\.objs\tbox\src\tbox\algorithm\bubble_sort.obj build\.objs\tbox\src\tbox\algorithm\count.obj build\.objs\tbox\src\tbox\algorithm\count_if.obj build\.objs\tbox\src\tbox\algorithm\distance.obj build\.objs\tbox\src\tbox\algorithm\find.obj build\.objs\tbox\src\tbox\algorithm\find_if.obj build\.objs\tbox\src\tbox\algorithm\heap_sort.obj build\.objs\tbox\src\tbox\algorithm\insert_sort.obj build\.objs\tbox\src\tbox\algorithm\predicate.obj build\.objs\tbox\src\tbox\algorithm\quick_sort.obj build\.objs\tbox\src\tbox\algorithm\remove.obj build\.objs\tbox\src\tbox\algorithm\remove_first.obj build\.objs\tbox\src\tbox\algorithm\remove_first_if.obj build\.objs\tbox\src\tbox\algorithm\remove_if.obj build\.objs\tbox\src\tbox\algorithm\rfind.obj build\.objs\tbox\src\tbox\algorithm\rfind_if.obj build\.objs\tbox\src\tbox\algorithm\rwalk.obj build\.objs\tbox\src\tbox\algorithm\sort.obj build\.objs\tbox\src\tbox\algorithm\walk.obj build\.objs\tbox\src\tbox\container\bloom_filter.obj build\.objs\tbox\src\tbox\container\circle_queue.obj build\.objs\tbox\src\tbox\container\element\hash.obj build\.objs\tbox\src\tbox\container\element\long.obj build\.objs\tbox\src\tbox\container\element\mem.obj build\.objs\tbox\src\tbox\container\element\null.obj build\.objs\tbox\src\tbox\container\element\obj.obj build\.objs\tbox\src\tbox\container\element\ptr.obj build\.objs\tbox\src\tbox\container\element\size.obj build\.objs\tbox\src\tbox\container\element\str.obj build\.objs\tbox\src\tbox\container\element\true.obj build\.objs\tbox\src\tbox\container\element\uint16.obj build\.objs\tbox\src\tbox\container\element\uint32.obj build\.objs\tbox\src\tbox\container\element\uint8.obj build\.objs\tbox\src\tbox\container\hash_map.obj build\.objs\tbox\src\tbox\container\hash_set.obj build\.objs\tbox\src\tbox\container\heap.obj build\.objs\tbox\src\tbox\container\iterator\long.obj build\.objs\tbox\src\tbox\container\iterator\mem.obj build\.objs\tbox\src\tbox\container\iterator\ptr.obj build\.objs\tbox\src\tbox\container\iterator\size.obj build\.objs\tbox\src\tbox\container\iterator\str.obj build\.objs\tbox\src\tbox\container\iterator.obj build\.objs\tbox\src\tbox\container\list.obj build\.objs\tbox\src\tbox\container\list_entry.obj build\.objs\tbox\src\tbox\container\priority_queue.obj build\.objs\tbox\src\tbox\container\queue.obj build\.objs\tbox\src\tbox\container\single_list.obj build\.objs\tbox\src\tbox\container\single_list_entry.obj build\.objs\tbox\src\tbox\container\stack.obj build\.objs\tbox\src\tbox\container\vector.obj build\.objs\tbox\src\tbox\libm\libm.obj build\.objs\tbox\src\tbox\libm\idivi8.obj build\.objs\tbox\src\tbox\libm\ilog2i.obj build\.objs\tbox\src\tbox\libm\isqrti.obj build\.objs\tbox\src\tbox\libm\isqrti64.obj build\.objs\tbox\src\tbox\platform\atomic64.obj build\.objs\tbox\src\tbox\platform\backtrace.obj build\.objs\tbox\src\tbox\platform\cache_time.obj build\.objs\tbox\src\tbox\platform\directory.obj build\.objs\tbox\src\tbox\platform\dynamic.obj build\.objs\tbox\src\tbox\platform\environment.obj build\.objs\tbox\src\tbox\platform\file.obj build\.objs\tbox\src\tbox\platform\hostname.obj build\.objs\tbox\src\tbox\platform\ifaddrs.obj build\.objs\tbox\src\tbox\platform\memory.obj build\.objs\tbox\src\tbox\platform\page.obj build\.objs\tbox\src\tbox\platform\path.obj build\.objs\tbox\src\tbox\platform\platform.obj build\.objs\tbox\src\tbox\platform\print.obj build\.objs\tbox\src\tbox\platform\process.obj build\.objs\tbox\src\tbox\platform\processor.obj build\.objs\tbox\src\tbox\platform\sched.obj build\.objs\tbox\src\tbox\platform\time.obj build\.objs\tbox\src\tbox\libm\acos.obj build\.objs\tbox\src\tbox\libm\acosf.obj build\.objs\tbox\src\tbox\libm\asin.obj build\.objs\tbox\src\tbox\libm\asinf.obj build\.objs\tbox\src\tbox\libm\atan.obj build\.objs\tbox\src\tbox\libm\atan2.obj build\.objs\tbox\src\tbox\libm\atan2f.obj build\.objs\tbox\src\tbox\libm\atanf.obj build\.objs\tbox\src\tbox\libm\cos.obj build\.objs\tbox\src\tbox\libm\cosf.obj build\.objs\tbox\src\tbox\libm\exp.obj build\.objs\tbox\src\tbox\libm\exp1.obj build\.objs\tbox\src\tbox\libm\exp1f.obj build\.objs\tbox\src\tbox\libm\expf.obj build\.objs\tbox\src\tbox\libm\expi.obj build\.objs\tbox\src\tbox\libm\expif.obj build\.objs\tbox\src\tbox\libm\fmod.obj build\.objs\tbox\src\tbox\libm\fmodf.obj build\.objs\tbox\src\tbox\libm\isfin.obj build\.objs\tbox\src\tbox\libm\isfinf.obj build\.objs\tbox\src\tbox\libm\isinf.obj build\.objs\tbox\src\tbox\libm\isinff.obj build\.objs\tbox\src\tbox\libm\isnan.obj build\.objs\tbox\src\tbox\libm\isnanf.obj build\.objs\tbox\src\tbox\libm\log2.obj build\.objs\tbox\src\tbox\libm\log2f.obj build\.objs\tbox\src\tbox\libm\pow.obj build\.objs\tbox\src\tbox\libm\powf.obj build\.objs\tbox\src\tbox\libm\sin.obj build\.objs\tbox\src\tbox\libm\sincos.obj build\.objs\tbox\src\tbox\libm\sincosf.obj build\.objs\tbox\src\tbox\libm\sinf.obj build\.objs\tbox\src\tbox\libm\sqrt.obj build\.objs\tbox\src\tbox\libm\sqrtf.obj build\.objs\tbox\src\tbox\libm\tan.obj build\.objs\tbox\src\tbox\libm\tanf.obj build\.objs\tbox\src\tbox\xml\node.obj build\.objs\tbox\src\tbox\xml\reader.obj build\.objs\tbox\src\tbox\xml\writer.obj build\.objs\tbox\src\tbox\regex\regex.obj build\.objs\tbox\src\tbox\asio\aioo.obj build\.objs\tbox\src\tbox\asio\aiop.obj build\.objs\tbox\src\tbox\platform\dns.obj build\.objs\tbox\src\tbox\platform\aioo.obj build\.objs\tbox\src\tbox\platform\aiop.obj build\.objs\tbox\src\tbox\platform\socket.obj build\.objs\tbox\src\tbox\stream\impl\stream\http.obj build\.objs\tbox\src\tbox\stream\impl\stream\sock.obj build\.objs\tbox\src\tbox\stream\impl\filter\chunked.obj build\.objs\tbox\src\tbox\network\cookies.obj build\.objs\tbox\src\tbox\network\dns\cache.obj build\.objs\tbox\src\tbox\network\dns\looker.obj build\.objs\tbox\src\tbox\network\dns\server.obj build\.objs\tbox\src\tbox\network\http.obj build\.objs\tbox\src\tbox\network\hwaddr.obj build\.objs\tbox\src\tbox\network\impl\http\date.obj build\.objs\tbox\src\tbox\network\impl\http\method.obj build\.objs\tbox\src\tbox\network\impl\http\option.obj build\.objs\tbox\src\tbox\network\impl\http\status.obj build\.objs\tbox\src\tbox\network\ipaddr.obj build\.objs\tbox\src\tbox\network\ipv4.obj build\.objs\tbox\src\tbox\network\ipv6.obj build\.objs\tbox\src\tbox\network\network.obj build\.objs\tbox\src\tbox\network\url.obj build\.objs\tbox\src\tbox\asio\aico.obj build\.objs\tbox\src\tbox\asio\aicp.obj build\.objs\tbox\src\tbox\asio\http.obj build\.objs\tbox\src\tbox\asio\dns.obj build\.objs\tbox\src\tbox\stream\async_stream.obj build\.objs\tbox\src\tbox\stream\async_transfer.obj build\.objs\tbox\src\tbox\stream\impl\async_stream\data.obj build\.objs\tbox\src\tbox\stream\impl\async_stream\file.obj build\.objs\tbox\src\tbox\stream\impl\async_stream\filter.obj build\.objs\tbox\src\tbox\stream\impl\async_stream\http.obj build\.objs\tbox\src\tbox\stream\impl\async_stream\prefix.obj build\.objs\tbox\src\tbox\stream\impl\async_stream\sock.obj build\.objs\tbox\src\tbox\stream\transfer_pool.obj build\.objs\tbox\src\tbox\platform\aicp.obj build\.objs\tbox\src\tbox\platform\thread.obj build\.objs\tbox\src\tbox\platform\thread_pool.obj build\.objs\tbox\src\tbox\platform\thread_store.obj build\.objs\tbox\src\tbox\platform\event.obj build\.objs\tbox\src\tbox\platform\mutex.obj build\.objs\tbox\src\tbox\platform\semaphore.obj build\.objs\tbox\src\tbox\platform\timer.obj build\.objs\tbox\src\tbox\platform\ltimer.obj build\.objs\tbox\src\tbox\object\array.obj build\.objs\tbox\src\tbox\object\boolean.obj build\.objs\tbox\src\tbox\object\data.obj build\.objs\tbox\src\tbox\object\date.obj build\.objs\tbox\src\tbox\object\dictionary.obj build\.objs\tbox\src\tbox\object\impl\reader\bin.obj build\.objs\tbox\src\tbox\object\impl\reader\bplist.obj build\.objs\tbox\src\tbox\object\impl\reader\json.obj build\.objs\tbox\src\tbox\object\impl\reader\reader.obj build\.objs\tbox\src\tbox\object\impl\writer\bin.obj build\.objs\tbox\src\tbox\object\impl\writer\bplist.obj build\.objs\tbox\src\tbox\object\impl\writer\json.obj build\.objs\tbox\src\tbox\object\impl\writer\writer.obj build\.objs\tbox\src\tbox\object\null.obj build\.objs\tbox\src\tbox\object\number.obj build\.objs\tbox\src\tbox\object\object.obj build\.objs\tbox\src\tbox\object\string.obj build\.objs\tbox\src\tbox\utils\option.obj build\.objs\tbox\src\tbox\object\impl\reader\xml.obj build\.objs\tbox\src\tbox\object\impl\reader\xplist.obj build\.objs\tbox\src\tbox\object\impl\writer\xml.obj build\.objs\tbox\src\tbox\object\impl\writer\xplist.obj build\.objs\tbox\src\tbox\charset\ascii.obj build\.objs\tbox\src\tbox\charset\charset.obj build\.objs\tbox\src\tbox\charset\gb2312.obj build\.objs\tbox\src\tbox\charset\iso8859.obj build\.objs\tbox\src\tbox\charset\ucs2.obj build\.objs\tbox\src\tbox\charset\ucs4.obj build\.objs\tbox\src\tbox\charset\utf16.obj build\.objs\tbox\src\tbox\charset\utf32.obj build\.objs\tbox\src\tbox\charset\utf8.obj build\.objs\tbox\src\tbox\stream\impl\filter\charset.obj build\.objs\tbox\src\tbox\zip\zip.obj build\.objs\tbox\src\tbox\stream\impl\filter\zip.obj build\.objs\tbox\src\tbox\database\sql.obj build\.objs\tbox\src\tbox\database\value.obj build\.objs\tbox\src\tbox\platform\windows\socket_pool.obj build\.objs\tbox\src\tbox\platform\windows\interface\dbghelp.obj build\.objs\tbox\src\tbox\platform\windows\interface\interface.obj build\.objs\tbox\src\tbox\platform\windows\interface\iphlpapi.obj build\.objs\tbox\src\tbox\platform\windows\interface\kernel32.obj build\.objs\tbox\src\tbox\platform\windows\interface\mswsock.obj build\.objs\tbox\src\tbox\platform\windows\interface\shell32.obj build\.objs\tbox\src\tbox\platform\windows\interface\user32.obj build\.objs\tbox\src\tbox\platform\windows\interface\ws2_32.obj
	@echo linking.release tbox.lib
	@xmake l $(VERBOSE) verbose "link.exe%20-lib%20-libpath:pkg\pcre2.pkg\lib\windows\x86%20pcre2-8.lib%20ws2_32.lib%20%20-nologo%20-machine:x86%20-out:build/tbox.lib%20*.obj"
	@xmake l mkdir build
	@link.exe -lib > build\.build.log 2>&1 @<<
-libpath:pkg\pcre2.pkg\lib\windows\x86 pcre2-8.lib ws2_32.lib  -nologo -machine:x86 -out:build/tbox.lib build\.objs\tbox\src\tbox\tbox.obj build\.objs\tbox\src\tbox\math\fixed16.obj build\.objs\tbox\src\tbox\math\impl\random_linear.obj build\.objs\tbox\src\tbox\math\int32.obj build\.objs\tbox\src\tbox\math\math.obj build\.objs\tbox\src\tbox\math\random.obj build\.objs\tbox\src\tbox\libc\libc.obj build\.objs\tbox\src\tbox\libc\misc\time\gmmktime.obj build\.objs\tbox\src\tbox\libc\misc\time\gmtime.obj build\.objs\tbox\src\tbox\libc\misc\time\localtime.obj build\.objs\tbox\src\tbox\libc\misc\time\mktime.obj build\.objs\tbox\src\tbox\libc\misc\time\time.obj build\.objs\tbox\src\tbox\libc\stdio\printf.obj build\.objs\tbox\src\tbox\libc\stdio\printf_object.obj build\.objs\tbox\src\tbox\libc\stdio\puts.obj build\.objs\tbox\src\tbox\libc\stdio\snprintf.obj build\.objs\tbox\src\tbox\libc\stdio\sprintf.obj build\.objs\tbox\src\tbox\libc\stdio\swprintf.obj build\.objs\tbox\src\tbox\libc\stdio\vsnprintf.obj build\.objs\tbox\src\tbox\libc\stdio\vswprintf.obj build\.objs\tbox\src\tbox\libc\stdio\wprintf.obj build\.objs\tbox\src\tbox\libc\stdio\wputs.obj build\.objs\tbox\src\tbox\libc\stdlib\mbstowcs.obj build\.objs\tbox\src\tbox\libc\stdlib\random.obj build\.objs\tbox\src\tbox\libc\stdlib\stdlib.obj build\.objs\tbox\src\tbox\libc\stdlib\wcstombs.obj build\.objs\tbox\src\tbox\libc\string\memcmp.obj build\.objs\tbox\src\tbox\libc\string\memcpy.obj build\.objs\tbox\src\tbox\libc\string\memdup.obj build\.objs\tbox\src\tbox\libc\string\memmem.obj build\.objs\tbox\src\tbox\libc\string\memmov.obj build\.objs\tbox\src\tbox\libc\string\memset.obj build\.objs\tbox\src\tbox\libc\string\strcat.obj build\.objs\tbox\src\tbox\libc\string\strchr.obj build\.objs\tbox\src\tbox\libc\string\strcmp.obj build\.objs\tbox\src\tbox\libc\string\strcpy.obj build\.objs\tbox\src\tbox\libc\string\strdup.obj build\.objs\tbox\src\tbox\libc\string\strichr.obj build\.objs\tbox\src\tbox\libc\string\stricmp.obj build\.objs\tbox\src\tbox\libc\string\strirchr.obj build\.objs\tbox\src\tbox\libc\string\strirstr.obj build\.objs\tbox\src\tbox\libc\string\stristr.obj build\.objs\tbox\src\tbox\libc\string\strlcpy.obj build\.objs\tbox\src\tbox\libc\string\strlen.obj build\.objs\tbox\src\tbox\libc\string\strncat.obj build\.objs\tbox\src\tbox\libc\string\strncmp.obj build\.objs\tbox\src\tbox\libc\string\strncpy.obj build\.objs\tbox\src\tbox\libc\string\strndup.obj build\.objs\tbox\src\tbox\libc\string\strnicmp.obj build\.objs\tbox\src\tbox\libc\string\strnirchr.obj build\.objs\tbox\src\tbox\libc\string\strnirstr.obj build\.objs\tbox\src\tbox\libc\string\strnistr.obj build\.objs\tbox\src\tbox\libc\string\strnlen.obj build\.objs\tbox\src\tbox\libc\string\strnrchr.obj build\.objs\tbox\src\tbox\libc\string\strnrstr.obj build\.objs\tbox\src\tbox\libc\string\strnstr.obj build\.objs\tbox\src\tbox\libc\string\strrchr.obj build\.objs\tbox\src\tbox\libc\string\strrstr.obj build\.objs\tbox\src\tbox\libc\string\strstr.obj build\.objs\tbox\src\tbox\libc\string\wcscat.obj build\.objs\tbox\src\tbox\libc\string\wcschr.obj build\.objs\tbox\src\tbox\libc\string\wcscmp.obj build\.objs\tbox\src\tbox\libc\string\wcscpy.obj build\.objs\tbox\src\tbox\libc\string\wcsdup.obj build\.objs\tbox\src\tbox\libc\string\wcsichr.obj build\.objs\tbox\src\tbox\libc\string\wcsicmp.obj build\.objs\tbox\src\tbox\libc\string\wcsirchr.obj build\.objs\tbox\src\tbox\libc\string\wcsirstr.obj build\.objs\tbox\src\tbox\libc\string\wcsistr.obj build\.objs\tbox\src\tbox\libc\string\wcslcpy.obj build\.objs\tbox\src\tbox\libc\string\wcslen.obj build\.objs\tbox\src\tbox\libc\string\wcsncat.obj build\.objs\tbox\src\tbox\libc\string\wcsncmp.obj build\.objs\tbox\src\tbox\libc\string\wcsncpy.obj build\.objs\tbox\src\tbox\libc\string\wcsndup.obj build\.objs\tbox\src\tbox\libc\string\wcsnicmp.obj build\.objs\tbox\src\tbox\libc\string\wcsnirchr.obj build\.objs\tbox\src\tbox\libc\string\wcsnirstr.obj build\.objs\tbox\src\tbox\libc\string\wcsnlen.obj build\.objs\tbox\src\tbox\libc\string\wcsnrchr.obj build\.objs\tbox\src\tbox\libc\string\wcsnrstr.obj build\.objs\tbox\src\tbox\libc\string\wcsrchr.obj build\.objs\tbox\src\tbox\libc\string\wcsrstr.obj build\.objs\tbox\src\tbox\libc\string\wcsstr.obj build\.objs\tbox\src\tbox\utils\adler32.obj build\.objs\tbox\src\tbox\utils\base32.obj build\.objs\tbox\src\tbox\utils\base64.obj build\.objs\tbox\src\tbox\utils\bits.obj build\.objs\tbox\src\tbox\utils\crc.obj build\.objs\tbox\src\tbox\utils\dump.obj build\.objs\tbox\src\tbox\utils\fnv32.obj build\.objs\tbox\src\tbox\utils\lock_profiler.obj build\.objs\tbox\src\tbox\utils\md5.obj build\.objs\tbox\src\tbox\utils\sha.obj build\.objs\tbox\src\tbox\utils\singleton.obj build\.objs\tbox\src\tbox\utils\trace.obj build\.objs\tbox\src\tbox\utils\url.obj build\.objs\tbox\src\tbox\utils\used.obj build\.objs\tbox\src\tbox\prefix\state.obj build\.objs\tbox\src\tbox\memory\allocator.obj build\.objs\tbox\src\tbox\memory\buffer.obj build\.objs\tbox\src\tbox\memory\default_allocator.obj build\.objs\tbox\src\tbox\memory\fixed_pool.obj build\.objs\tbox\src\tbox\memory\impl\native_large_allocator.obj build\.objs\tbox\src\tbox\memory\impl\prefix.obj build\.objs\tbox\src\tbox\memory\impl\static_fixed_pool.obj build\.objs\tbox\src\tbox\memory\impl\static_large_allocator.obj build\.objs\tbox\src\tbox\memory\large_allocator.obj build\.objs\tbox\src\tbox\memory\memory.obj build\.objs\tbox\src\tbox\memory\native_allocator.obj build\.objs\tbox\src\tbox\memory\queue_buffer.obj build\.objs\tbox\src\tbox\memory\small_allocator.obj build\.objs\tbox\src\tbox\memory\static_allocator.obj build\.objs\tbox\src\tbox\memory\static_buffer.obj build\.objs\tbox\src\tbox\memory\string_pool.obj build\.objs\tbox\src\tbox\string\static_string.obj build\.objs\tbox\src\tbox\string\string.obj build\.objs\tbox\src\tbox\stream\filter.obj build\.objs\tbox\src\tbox\stream\impl\filter\cache.obj build\.objs\tbox\src\tbox\stream\impl\stream\data.obj build\.objs\tbox\src\tbox\stream\impl\stream\file.obj build\.objs\tbox\src\tbox\stream\impl\stream\filter.obj build\.objs\tbox\src\tbox\stream\static_stream.obj build\.objs\tbox\src\tbox\stream\stream.obj build\.objs\tbox\src\tbox\stream\transfer.obj build\.objs\tbox\src\tbox\algorithm\binary_find.obj build\.objs\tbox\src\tbox\algorithm\binary_find_if.obj build\.objs\tbox\src\tbox\algorithm\bubble_sort.obj build\.objs\tbox\src\tbox\algorithm\count.obj build\.objs\tbox\src\tbox\algorithm\count_if.obj build\.objs\tbox\src\tbox\algorithm\distance.obj build\.objs\tbox\src\tbox\algorithm\find.obj build\.objs\tbox\src\tbox\algorithm\find_if.obj build\.objs\tbox\src\tbox\algorithm\heap_sort.obj build\.objs\tbox\src\tbox\algorithm\insert_sort.obj build\.objs\tbox\src\tbox\algorithm\predicate.obj build\.objs\tbox\src\tbox\algorithm\quick_sort.obj build\.objs\tbox\src\tbox\algorithm\remove.obj build\.objs\tbox\src\tbox\algorithm\remove_first.obj build\.objs\tbox\src\tbox\algorithm\remove_first_if.obj build\.objs\tbox\src\tbox\algorithm\remove_if.obj build\.objs\tbox\src\tbox\algorithm\rfind.obj build\.objs\tbox\src\tbox\algorithm\rfind_if.obj build\.objs\tbox\src\tbox\algorithm\rwalk.obj build\.objs\tbox\src\tbox\algorithm\sort.obj build\.objs\tbox\src\tbox\algorithm\walk.obj build\.objs\tbox\src\tbox\container\bloom_filter.obj build\.objs\tbox\src\tbox\container\circle_queue.obj build\.objs\tbox\src\tbox\container\element\hash.obj build\.objs\tbox\src\tbox\container\element\long.obj build\.objs\tbox\src\tbox\container\element\mem.obj build\.objs\tbox\src\tbox\container\element\null.obj build\.objs\tbox\src\tbox\container\element\obj.obj build\.objs\tbox\src\tbox\container\element\ptr.obj build\.objs\tbox\src\tbox\container\element\size.obj build\.objs\tbox\src\tbox\container\element\str.obj build\.objs\tbox\src\tbox\container\element\true.obj build\.objs\tbox\src\tbox\container\element\uint16.obj build\.objs\tbox\src\tbox\container\element\uint32.obj build\.objs\tbox\src\tbox\container\element\uint8.obj build\.objs\tbox\src\tbox\container\hash_map.obj build\.objs\tbox\src\tbox\container\hash_set.obj build\.objs\tbox\src\tbox\container\heap.obj build\.objs\tbox\src\tbox\container\iterator\long.obj build\.objs\tbox\src\tbox\container\iterator\mem.obj build\.objs\tbox\src\tbox\container\iterator\ptr.obj build\.objs\tbox\src\tbox\container\iterator\size.obj build\.objs\tbox\src\tbox\container\iterator\str.obj build\.objs\tbox\src\tbox\container\iterator.obj build\.objs\tbox\src\tbox\container\list.obj build\.objs\tbox\src\tbox\container\list_entry.obj build\.objs\tbox\src\tbox\container\priority_queue.obj build\.objs\tbox\src\tbox\container\queue.obj build\.objs\tbox\src\tbox\container\single_list.obj build\.objs\tbox\src\tbox\container\single_list_entry.obj build\.objs\tbox\src\tbox\container\stack.obj build\.objs\tbox\src\tbox\container\vector.obj build\.objs\tbox\src\tbox\libm\libm.obj build\.objs\tbox\src\tbox\libm\idivi8.obj build\.objs\tbox\src\tbox\libm\ilog2i.obj build\.objs\tbox\src\tbox\libm\isqrti.obj build\.objs\tbox\src\tbox\libm\isqrti64.obj build\.objs\tbox\src\tbox\platform\atomic64.obj build\.objs\tbox\src\tbox\platform\backtrace.obj build\.objs\tbox\src\tbox\platform\cache_time.obj build\.objs\tbox\src\tbox\platform\directory.obj build\.objs\tbox\src\tbox\platform\dynamic.obj build\.objs\tbox\src\tbox\platform\environment.obj build\.objs\tbox\src\tbox\platform\file.obj build\.objs\tbox\src\tbox\platform\hostname.obj build\.objs\tbox\src\tbox\platform\ifaddrs.obj build\.objs\tbox\src\tbox\platform\memory.obj build\.objs\tbox\src\tbox\platform\page.obj build\.objs\tbox\src\tbox\platform\path.obj build\.objs\tbox\src\tbox\platform\platform.obj build\.objs\tbox\src\tbox\platform\print.obj build\.objs\tbox\src\tbox\platform\process.obj build\.objs\tbox\src\tbox\platform\processor.obj build\.objs\tbox\src\tbox\platform\sched.obj build\.objs\tbox\src\tbox\platform\time.obj build\.objs\tbox\src\tbox\libm\acos.obj build\.objs\tbox\src\tbox\libm\acosf.obj build\.objs\tbox\src\tbox\libm\asin.obj build\.objs\tbox\src\tbox\libm\asinf.obj build\.objs\tbox\src\tbox\libm\atan.obj build\.objs\tbox\src\tbox\libm\atan2.obj build\.objs\tbox\src\tbox\libm\atan2f.obj build\.objs\tbox\src\tbox\libm\atanf.obj build\.objs\tbox\src\tbox\libm\cos.obj build\.objs\tbox\src\tbox\libm\cosf.obj build\.objs\tbox\src\tbox\libm\exp.obj build\.objs\tbox\src\tbox\libm\exp1.obj build\.objs\tbox\src\tbox\libm\exp1f.obj build\.objs\tbox\src\tbox\libm\expf.obj build\.objs\tbox\src\tbox\libm\expi.obj build\.objs\tbox\src\tbox\libm\expif.obj build\.objs\tbox\src\tbox\libm\fmod.obj build\.objs\tbox\src\tbox\libm\fmodf.obj build\.objs\tbox\src\tbox\libm\isfin.obj build\.objs\tbox\src\tbox\libm\isfinf.obj build\.objs\tbox\src\tbox\libm\isinf.obj build\.objs\tbox\src\tbox\libm\isinff.obj build\.objs\tbox\src\tbox\libm\isnan.obj build\.objs\tbox\src\tbox\libm\isnanf.obj build\.objs\tbox\src\tbox\libm\log2.obj build\.objs\tbox\src\tbox\libm\log2f.obj build\.objs\tbox\src\tbox\libm\pow.obj build\.objs\tbox\src\tbox\libm\powf.obj build\.objs\tbox\src\tbox\libm\sin.obj build\.objs\tbox\src\tbox\libm\sincos.obj build\.objs\tbox\src\tbox\libm\sincosf.obj build\.objs\tbox\src\tbox\libm\sinf.obj build\.objs\tbox\src\tbox\libm\sqrt.obj build\.objs\tbox\src\tbox\libm\sqrtf.obj build\.objs\tbox\src\tbox\libm\tan.obj build\.objs\tbox\src\tbox\libm\tanf.obj build\.objs\tbox\src\tbox\xml\node.obj build\.objs\tbox\src\tbox\xml\reader.obj build\.objs\tbox\src\tbox\xml\writer.obj build\.objs\tbox\src\tbox\regex\regex.obj build\.objs\tbox\src\tbox\asio\aioo.obj build\.objs\tbox\src\tbox\asio\aiop.obj build\.objs\tbox\src\tbox\platform\dns.obj build\.objs\tbox\src\tbox\platform\aioo.obj build\.objs\tbox\src\tbox\platform\aiop.obj build\.objs\tbox\src\tbox\platform\socket.obj build\.objs\tbox\src\tbox\stream\impl\stream\http.obj build\.objs\tbox\src\tbox\stream\impl\stream\sock.obj build\.objs\tbox\src\tbox\stream\impl\filter\chunked.obj build\.objs\tbox\src\tbox\network\cookies.obj build\.objs\tbox\src\tbox\network\dns\cache.obj build\.objs\tbox\src\tbox\network\dns\looker.obj build\.objs\tbox\src\tbox\network\dns\server.obj build\.objs\tbox\src\tbox\network\http.obj build\.objs\tbox\src\tbox\network\hwaddr.obj build\.objs\tbox\src\tbox\network\impl\http\date.obj build\.objs\tbox\src\tbox\network\impl\http\method.obj build\.objs\tbox\src\tbox\network\impl\http\option.obj build\.objs\tbox\src\tbox\network\impl\http\status.obj build\.objs\tbox\src\tbox\network\ipaddr.obj build\.objs\tbox\src\tbox\network\ipv4.obj build\.objs\tbox\src\tbox\network\ipv6.obj build\.objs\tbox\src\tbox\network\network.obj build\.objs\tbox\src\tbox\network\url.obj build\.objs\tbox\src\tbox\asio\aico.obj build\.objs\tbox\src\tbox\asio\aicp.obj build\.objs\tbox\src\tbox\asio\http.obj build\.objs\tbox\src\tbox\asio\dns.obj build\.objs\tbox\src\tbox\stream\async_stream.obj build\.objs\tbox\src\tbox\stream\async_transfer.obj build\.objs\tbox\src\tbox\stream\impl\async_stream\data.obj build\.objs\tbox\src\tbox\stream\impl\async_stream\file.obj build\.objs\tbox\src\tbox\stream\impl\async_stream\filter.obj build\.objs\tbox\src\tbox\stream\impl\async_stream\http.obj build\.objs\tbox\src\tbox\stream\impl\async_stream\prefix.obj build\.objs\tbox\src\tbox\stream\impl\async_stream\sock.obj build\.objs\tbox\src\tbox\stream\transfer_pool.obj build\.objs\tbox\src\tbox\platform\aicp.obj build\.objs\tbox\src\tbox\platform\thread.obj build\.objs\tbox\src\tbox\platform\thread_pool.obj build\.objs\tbox\src\tbox\platform\thread_store.obj build\.objs\tbox\src\tbox\platform\event.obj build\.objs\tbox\src\tbox\platform\mutex.obj build\.objs\tbox\src\tbox\platform\semaphore.obj build\.objs\tbox\src\tbox\platform\timer.obj build\.objs\tbox\src\tbox\platform\ltimer.obj build\.objs\tbox\src\tbox\object\array.obj build\.objs\tbox\src\tbox\object\boolean.obj build\.objs\tbox\src\tbox\object\data.obj build\.objs\tbox\src\tbox\object\date.obj build\.objs\tbox\src\tbox\object\dictionary.obj build\.objs\tbox\src\tbox\object\impl\reader\bin.obj build\.objs\tbox\src\tbox\object\impl\reader\bplist.obj build\.objs\tbox\src\tbox\object\impl\reader\json.obj build\.objs\tbox\src\tbox\object\impl\reader\reader.obj build\.objs\tbox\src\tbox\object\impl\writer\bin.obj build\.objs\tbox\src\tbox\object\impl\writer\bplist.obj build\.objs\tbox\src\tbox\object\impl\writer\json.obj build\.objs\tbox\src\tbox\object\impl\writer\writer.obj build\.objs\tbox\src\tbox\object\null.obj build\.objs\tbox\src\tbox\object\number.obj build\.objs\tbox\src\tbox\object\object.obj build\.objs\tbox\src\tbox\object\string.obj build\.objs\tbox\src\tbox\utils\option.obj build\.objs\tbox\src\tbox\object\impl\reader\xml.obj build\.objs\tbox\src\tbox\object\impl\reader\xplist.obj build\.objs\tbox\src\tbox\object\impl\writer\xml.obj build\.objs\tbox\src\tbox\object\impl\writer\xplist.obj build\.objs\tbox\src\tbox\charset\ascii.obj build\.objs\tbox\src\tbox\charset\charset.obj build\.objs\tbox\src\tbox\charset\gb2312.obj build\.objs\tbox\src\tbox\charset\iso8859.obj build\.objs\tbox\src\tbox\charset\ucs2.obj build\.objs\tbox\src\tbox\charset\ucs4.obj build\.objs\tbox\src\tbox\charset\utf16.obj build\.objs\tbox\src\tbox\charset\utf32.obj build\.objs\tbox\src\tbox\charset\utf8.obj build\.objs\tbox\src\tbox\stream\impl\filter\charset.obj build\.objs\tbox\src\tbox\zip\zip.obj build\.objs\tbox\src\tbox\stream\impl\filter\zip.obj build\.objs\tbox\src\tbox\database\sql.obj build\.objs\tbox\src\tbox\database\value.obj build\.objs\tbox\src\tbox\platform\windows\socket_pool.obj build\.objs\tbox\src\tbox\platform\windows\interface\dbghelp.obj build\.objs\tbox\src\tbox\platform\windows\interface\interface.obj build\.objs\tbox\src\tbox\platform\windows\interface\iphlpapi.obj build\.objs\tbox\src\tbox\platform\windows\interface\kernel32.obj build\.objs\tbox\src\tbox\platform\windows\interface\mswsock.obj build\.objs\tbox\src\tbox\platform\windows\interface\shell32.obj build\.objs\tbox\src\tbox\platform\windows\interface\user32.obj build\.objs\tbox\src\tbox\platform\windows\interface\ws2_32.obj
<<
	@xmake l cp src\tbox\algorithm\algorithm.h build\tbox\algorithm\algorithm.h
	@xmake l cp src\tbox\algorithm\binary_find.h build\tbox\algorithm\binary_find.h
	@xmake l cp src\tbox\algorithm\binary_find_if.h build\tbox\algorithm\binary_find_if.h
	@xmake l cp src\tbox\algorithm\bubble_sort.h build\tbox\algorithm\bubble_sort.h
	@xmake l cp src\tbox\algorithm\count.h build\tbox\algorithm\count.h
	@xmake l cp src\tbox\algorithm\count_if.h build\tbox\algorithm\count_if.h
	@xmake l cp src\tbox\algorithm\distance.h build\tbox\algorithm\distance.h
	@xmake l cp src\tbox\algorithm\find.h build\tbox\algorithm\find.h
	@xmake l cp src\tbox\algorithm\find_if.h build\tbox\algorithm\find_if.h
	@xmake l cp src\tbox\algorithm\for.h build\tbox\algorithm\for.h
	@xmake l cp src\tbox\algorithm\for_if.h build\tbox\algorithm\for_if.h
	@xmake l cp src\tbox\algorithm\heap_sort.h build\tbox\algorithm\heap_sort.h
	@xmake l cp src\tbox\algorithm\insert_sort.h build\tbox\algorithm\insert_sort.h
	@xmake l cp src\tbox\algorithm\predicate.h build\tbox\algorithm\predicate.h
	@xmake l cp src\tbox\algorithm\prefix.h build\tbox\algorithm\prefix.h
	@xmake l cp src\tbox\algorithm\quick_sort.h build\tbox\algorithm\quick_sort.h
	@xmake l cp src\tbox\algorithm\remove.h build\tbox\algorithm\remove.h
	@xmake l cp src\tbox\algorithm\remove_first.h build\tbox\algorithm\remove_first.h
	@xmake l cp src\tbox\algorithm\remove_first_if.h build\tbox\algorithm\remove_first_if.h
	@xmake l cp src\tbox\algorithm\remove_if.h build\tbox\algorithm\remove_if.h
	@xmake l cp src\tbox\algorithm\rfind.h build\tbox\algorithm\rfind.h
	@xmake l cp src\tbox\algorithm\rfind_if.h build\tbox\algorithm\rfind_if.h
	@xmake l cp src\tbox\algorithm\rfor.h build\tbox\algorithm\rfor.h
	@xmake l cp src\tbox\algorithm\rfor_if.h build\tbox\algorithm\rfor_if.h
	@xmake l cp src\tbox\algorithm\rwalk.h build\tbox\algorithm\rwalk.h
	@xmake l cp src\tbox\algorithm\sort.h build\tbox\algorithm\sort.h
	@xmake l cp src\tbox\algorithm\walk.h build\tbox\algorithm\walk.h
	@xmake l cp src\tbox\asio\aice.h build\tbox\asio\aice.h
	@xmake l cp src\tbox\asio\aico.h build\tbox\asio\aico.h
	@xmake l cp src\tbox\asio\aicp.h build\tbox\asio\aicp.h
	@xmake l cp src\tbox\asio\aioe.h build\tbox\asio\aioe.h
	@xmake l cp src\tbox\asio\aioo.h build\tbox\asio\aioo.h
	@xmake l cp src\tbox\asio\aiop.h build\tbox\asio\aiop.h
	@xmake l cp src\tbox\asio\asio.h build\tbox\asio\asio.h
	@xmake l cp src\tbox\asio\dns.h build\tbox\asio\dns.h
	@xmake l cp src\tbox\asio\http.h build\tbox\asio\http.h
	@xmake l cp src\tbox\asio\prefix.h build\tbox\asio\prefix.h
	@xmake l cp src\tbox\asio\ssl.h build\tbox\asio\ssl.h
	@xmake l cp src\tbox\charset\charset.h build\tbox\charset\charset.h
	@xmake l cp src\tbox\charset\prefix.h build\tbox\charset\prefix.h
	@xmake l cp src\tbox\config.h build\tbox\config.h
	@xmake l cp src\tbox\container\bloom_filter.h build\tbox\container\bloom_filter.h
	@xmake l cp src\tbox\container\circle_queue.h build\tbox\container\circle_queue.h
	@xmake l cp src\tbox\container\container.h build\tbox\container\container.h
	@xmake l cp src\tbox\container\element\hash.h build\tbox\container\element\hash.h
	@xmake l cp src\tbox\container\element\prefix.h build\tbox\container\element\prefix.h
	@xmake l cp src\tbox\container\element.h build\tbox\container\element.h
	@xmake l cp src\tbox\container\hash_map.h build\tbox\container\hash_map.h
	@xmake l cp src\tbox\container\hash_set.h build\tbox\container\hash_set.h
	@xmake l cp src\tbox\container\heap.h build\tbox\container\heap.h
	@xmake l cp src\tbox\container\iterator\prefix.h build\tbox\container\iterator\prefix.h
	@xmake l cp src\tbox\container\iterator.h build\tbox\container\iterator.h
	@xmake l cp src\tbox\container\list.h build\tbox\container\list.h
	@xmake l cp src\tbox\container\list_entry.h build\tbox\container\list_entry.h
	@xmake l cp src\tbox\container\prefix.h build\tbox\container\prefix.h
	@xmake l cp src\tbox\container\priority_queue.h build\tbox\container\priority_queue.h
	@xmake l cp src\tbox\container\queue.h build\tbox\container\queue.h
	@xmake l cp src\tbox\container\single_list.h build\tbox\container\single_list.h
	@xmake l cp src\tbox\container\single_list_entry.h build\tbox\container\single_list_entry.h
	@xmake l cp src\tbox\container\stack.h build\tbox\container\stack.h
	@xmake l cp src\tbox\container\vector.h build\tbox\container\vector.h
	@xmake l cp src\tbox\database\database.h build\tbox\database\database.h
	@xmake l cp src\tbox\database\prefix.h build\tbox\database\prefix.h
	@xmake l cp src\tbox\database\sql.h build\tbox\database\sql.h
	@xmake l cp src\tbox\database\value.h build\tbox\database\value.h
	@xmake l cp src\tbox\libc\libc.h build\tbox\libc\libc.h
	@xmake l cp src\tbox\libc\misc\ctype.h build\tbox\libc\misc\ctype.h
	@xmake l cp src\tbox\libc\misc\limits.h build\tbox\libc\misc\limits.h
	@xmake l cp src\tbox\libc\misc\misc.h build\tbox\libc\misc\misc.h
	@xmake l cp src\tbox\libc\misc\prefix.h build\tbox\libc\misc\prefix.h
	@xmake l cp src\tbox\libc\misc\setjmp.h build\tbox\libc\misc\setjmp.h
	@xmake l cp src\tbox\libc\misc\signal.h build\tbox\libc\misc\signal.h
	@xmake l cp src\tbox\libc\misc\stdarg.h build\tbox\libc\misc\stdarg.h
	@xmake l cp src\tbox\libc\misc\time\prefix.h build\tbox\libc\misc\time\prefix.h
	@xmake l cp src\tbox\libc\misc\time\time.h build\tbox\libc\misc\time\time.h
	@xmake l cp src\tbox\libc\misc\time\type.h build\tbox\libc\misc\time\type.h
	@xmake l cp src\tbox\libc\prefix.h build\tbox\libc\prefix.h
	@xmake l cp src\tbox\libc\stdio\prefix.h build\tbox\libc\stdio\prefix.h
	@xmake l cp src\tbox\libc\stdio\printf_object.h build\tbox\libc\stdio\printf_object.h
	@xmake l cp src\tbox\libc\stdio\stdio.h build\tbox\libc\stdio\stdio.h
	@xmake l cp src\tbox\libc\stdlib\prefix.h build\tbox\libc\stdlib\prefix.h
	@xmake l cp src\tbox\libc\stdlib\stdlib.h build\tbox\libc\stdlib\stdlib.h
	@xmake l cp src\tbox\libc\string\prefix.h build\tbox\libc\string\prefix.h
	@xmake l cp src\tbox\libc\string\string.h build\tbox\libc\string\string.h
	@xmake l cp src\tbox\libm\ceil.h build\tbox\libm\ceil.h
	@xmake l cp src\tbox\libm\fabs.h build\tbox\libm\fabs.h
	@xmake l cp src\tbox\libm\floor.h build\tbox\libm\floor.h
	@xmake l cp src\tbox\libm\inf.h build\tbox\libm\inf.h
	@xmake l cp src\tbox\libm\libm.h build\tbox\libm\libm.h
	@xmake l cp src\tbox\libm\maf.h build\tbox\libm\maf.h
	@xmake l cp src\tbox\libm\math.h build\tbox\libm\math.h
	@xmake l cp src\tbox\libm\mif.h build\tbox\libm\mif.h
	@xmake l cp src\tbox\libm\nan.h build\tbox\libm\nan.h
	@xmake l cp src\tbox\libm\pi.h build\tbox\libm\pi.h
	@xmake l cp src\tbox\libm\prefix.h build\tbox\libm\prefix.h
	@xmake l cp src\tbox\libm\round.h build\tbox\libm\round.h
	@xmake l cp src\tbox\math\fixed.h build\tbox\math\fixed.h
	@xmake l cp src\tbox\math\fixed16.h build\tbox\math\fixed16.h
	@xmake l cp src\tbox\math\fixed30.h build\tbox\math\fixed30.h
	@xmake l cp src\tbox\math\fixed6.h build\tbox\math\fixed6.h
	@xmake l cp src\tbox\math\int32.h build\tbox\math\int32.h
	@xmake l cp src\tbox\math\math.h build\tbox\math\math.h
	@xmake l cp src\tbox\math\prefix.h build\tbox\math\prefix.h
	@xmake l cp src\tbox\math\random.h build\tbox\math\random.h
	@xmake l cp src\tbox\memory\allocator.h build\tbox\memory\allocator.h
	@xmake l cp src\tbox\memory\buffer.h build\tbox\memory\buffer.h
	@xmake l cp src\tbox\memory\default_allocator.h build\tbox\memory\default_allocator.h
	@xmake l cp src\tbox\memory\fixed_pool.h build\tbox\memory\fixed_pool.h
	@xmake l cp src\tbox\memory\large_allocator.h build\tbox\memory\large_allocator.h
	@xmake l cp src\tbox\memory\memory.h build\tbox\memory\memory.h
	@xmake l cp src\tbox\memory\native_allocator.h build\tbox\memory\native_allocator.h
	@xmake l cp src\tbox\memory\prefix.h build\tbox\memory\prefix.h
	@xmake l cp src\tbox\memory\queue_buffer.h build\tbox\memory\queue_buffer.h
	@xmake l cp src\tbox\memory\small_allocator.h build\tbox\memory\small_allocator.h
	@xmake l cp src\tbox\memory\static_allocator.h build\tbox\memory\static_allocator.h
	@xmake l cp src\tbox\memory\static_buffer.h build\tbox\memory\static_buffer.h
	@xmake l cp src\tbox\memory\string_pool.h build\tbox\memory\string_pool.h
	@xmake l cp src\tbox\network\cookies.h build\tbox\network\cookies.h
	@xmake l cp src\tbox\network\dns\cache.h build\tbox\network\dns\cache.h
	@xmake l cp src\tbox\network\dns\dns.h build\tbox\network\dns\dns.h
	@xmake l cp src\tbox\network\dns\looker.h build\tbox\network\dns\looker.h
	@xmake l cp src\tbox\network\dns\prefix.h build\tbox\network\dns\prefix.h
	@xmake l cp src\tbox\network\dns\server.h build\tbox\network\dns\server.h
	@xmake l cp src\tbox\network\http.h build\tbox\network\http.h
	@xmake l cp src\tbox\network\hwaddr.h build\tbox\network\hwaddr.h
	@xmake l cp src\tbox\network\ipaddr.h build\tbox\network\ipaddr.h
	@xmake l cp src\tbox\network\ipv4.h build\tbox\network\ipv4.h
	@xmake l cp src\tbox\network\ipv6.h build\tbox\network\ipv6.h
	@xmake l cp src\tbox\network\network.h build\tbox\network\network.h
	@xmake l cp src\tbox\network\prefix.h build\tbox\network\prefix.h
	@xmake l cp src\tbox\network\ssl.h build\tbox\network\ssl.h
	@xmake l cp src\tbox\network\url.h build\tbox\network\url.h
	@xmake l cp src\tbox\object\array.h build\tbox\object\array.h
	@xmake l cp src\tbox\object\boolean.h build\tbox\object\boolean.h
	@xmake l cp src\tbox\object\data.h build\tbox\object\data.h
	@xmake l cp src\tbox\object\date.h build\tbox\object\date.h
	@xmake l cp src\tbox\object\dictionary.h build\tbox\object\dictionary.h
	@xmake l cp src\tbox\object\null.h build\tbox\object\null.h
	@xmake l cp src\tbox\object\number.h build\tbox\object\number.h
	@xmake l cp src\tbox\object\object.h build\tbox\object\object.h
	@xmake l cp src\tbox\object\prefix.h build\tbox\object\prefix.h
	@xmake l cp src\tbox\object\string.h build\tbox\object\string.h
	@xmake l cp src\tbox\platform\android\android.h build\tbox\platform\android\android.h
	@xmake l cp src\tbox\platform\android\prefix.h build\tbox\platform\android\prefix.h
	@xmake l cp src\tbox\platform\arch\arm\atomic.h build\tbox\platform\arch\arm\atomic.h
	@xmake l cp src\tbox\platform\arch\arm\frame.h build\tbox\platform\arch\arm\frame.h
	@xmake l cp src\tbox\platform\arch\arm\prefix.h build\tbox\platform\arch\arm\prefix.h
	@xmake l cp src\tbox\platform\arch\atomic.h build\tbox\platform\arch\atomic.h
	@xmake l cp src\tbox\platform\arch\barrier.h build\tbox\platform\arch\barrier.h
	@xmake l cp src\tbox\platform\arch\frame.h build\tbox\platform\arch\frame.h
	@xmake l cp src\tbox\platform\arch\prefix.h build\tbox\platform\arch\prefix.h
	@xmake l cp src\tbox\platform\arch\x64\atomic.h build\tbox\platform\arch\x64\atomic.h
	@xmake l cp src\tbox\platform\arch\x64\barrier.h build\tbox\platform\arch\x64\barrier.h
	@xmake l cp src\tbox\platform\arch\x64\frame.h build\tbox\platform\arch\x64\frame.h
	@xmake l cp src\tbox\platform\arch\x64\prefix.h build\tbox\platform\arch\x64\prefix.h
	@xmake l cp src\tbox\platform\arch\x86\atomic.h build\tbox\platform\arch\x86\atomic.h
	@xmake l cp src\tbox\platform\arch\x86\barrier.h build\tbox\platform\arch\x86\barrier.h
	@xmake l cp src\tbox\platform\arch\x86\frame.h build\tbox\platform\arch\x86\frame.h
	@xmake l cp src\tbox\platform\arch\x86\prefix.h build\tbox\platform\arch\x86\prefix.h
	@xmake l cp src\tbox\platform\atomic.h build\tbox\platform\atomic.h
	@xmake l cp src\tbox\platform\atomic64.h build\tbox\platform\atomic64.h
	@xmake l cp src\tbox\platform\backtrace.h build\tbox\platform\backtrace.h
	@xmake l cp src\tbox\platform\barrier.h build\tbox\platform\barrier.h
	@xmake l cp src\tbox\platform\cache_time.h build\tbox\platform\cache_time.h
	@xmake l cp src\tbox\platform\compiler\gcc\atomic.h build\tbox\platform\compiler\gcc\atomic.h
	@xmake l cp src\tbox\platform\compiler\gcc\atomic64.h build\tbox\platform\compiler\gcc\atomic64.h
	@xmake l cp src\tbox\platform\compiler\gcc\barrier.h build\tbox\platform\compiler\gcc\barrier.h
	@xmake l cp src\tbox\platform\compiler\gcc\prefix.h build\tbox\platform\compiler\gcc\prefix.h
	@xmake l cp src\tbox\platform\compiler\prefix.h build\tbox\platform\compiler\prefix.h
	@xmake l cp src\tbox\platform\directory.h build\tbox\platform\directory.h
	@xmake l cp src\tbox\platform\dns.h build\tbox\platform\dns.h
	@xmake l cp src\tbox\platform\dynamic.h build\tbox\platform\dynamic.h
	@xmake l cp src\tbox\platform\environment.h build\tbox\platform\environment.h
	@xmake l cp src\tbox\platform\event.h build\tbox\platform\event.h
	@xmake l cp src\tbox\platform\exception.h build\tbox\platform\exception.h
	@xmake l cp src\tbox\platform\file.h build\tbox\platform\file.h
	@xmake l cp src\tbox\platform\hostname.h build\tbox\platform\hostname.h
	@xmake l cp src\tbox\platform\ifaddrs.h build\tbox\platform\ifaddrs.h
	@xmake l cp src\tbox\platform\libc\exception.h build\tbox\platform\libc\exception.h
	@xmake l cp src\tbox\platform\libc\prefix.h build\tbox\platform\libc\prefix.h
	@xmake l cp src\tbox\platform\linux\prefix.h build\tbox\platform\linux\prefix.h
	@xmake l cp src\tbox\platform\ltimer.h build\tbox\platform\ltimer.h
	@xmake l cp src\tbox\platform\mach\barrier.h build\tbox\platform\mach\barrier.h
	@xmake l cp src\tbox\platform\mach\ios\prefix.h build\tbox\platform\mach\ios\prefix.h
	@xmake l cp src\tbox\platform\mach\mac\prefix.h build\tbox\platform\mach\mac\prefix.h
	@xmake l cp src\tbox\platform\mach\prefix.h build\tbox\platform\mach\prefix.h
	@xmake l cp src\tbox\platform\memory.h build\tbox\platform\memory.h
	@xmake l cp src\tbox\platform\mutex.h build\tbox\platform\mutex.h
	@xmake l cp src\tbox\platform\page.h build\tbox\platform\page.h
	@xmake l cp src\tbox\platform\path.h build\tbox\platform\path.h
	@xmake l cp src\tbox\platform\platform.h build\tbox\platform\platform.h
	@xmake l cp src\tbox\platform\posix\prefix.h build\tbox\platform\posix\prefix.h
	@xmake l cp src\tbox\platform\posix\sockaddr.h build\tbox\platform\posix\sockaddr.h
	@xmake l cp src\tbox\platform\prefix.h build\tbox\platform\prefix.h
	@xmake l cp src\tbox\platform\print.h build\tbox\platform\print.h
	@xmake l cp src\tbox\platform\process.h build\tbox\platform\process.h
	@xmake l cp src\tbox\platform\processor.h build\tbox\platform\processor.h
	@xmake l cp src\tbox\platform\sched.h build\tbox\platform\sched.h
	@xmake l cp src\tbox\platform\semaphore.h build\tbox\platform\semaphore.h
	@xmake l cp src\tbox\platform\socket.h build\tbox\platform\socket.h
	@xmake l cp src\tbox\platform\spinlock.h build\tbox\platform\spinlock.h
	@xmake l cp src\tbox\platform\systemv\prefix.h build\tbox\platform\systemv\prefix.h
	@xmake l cp src\tbox\platform\thread.h build\tbox\platform\thread.h
	@xmake l cp src\tbox\platform\thread_pool.h build\tbox\platform\thread_pool.h
	@xmake l cp src\tbox\platform\thread_store.h build\tbox\platform\thread_store.h
	@xmake l cp src\tbox\platform\time.h build\tbox\platform\time.h
	@xmake l cp src\tbox\platform\timer.h build\tbox\platform\timer.h
	@xmake l cp src\tbox\platform\unix\prefix.h build\tbox\platform\unix\prefix.h
	@xmake l cp src\tbox\platform\unix\syscall.h build\tbox\platform\unix\syscall.h
	@xmake l cp src\tbox\platform\windows\atomic.h build\tbox\platform\windows\atomic.h
	@xmake l cp src\tbox\platform\windows\atomic64.h build\tbox\platform\windows\atomic64.h
	@xmake l cp src\tbox\platform\windows\barrier.h build\tbox\platform\windows\barrier.h
	@xmake l cp src\tbox\platform\windows\exception.h build\tbox\platform\windows\exception.h
	@xmake l cp src\tbox\platform\windows\interface\dbghelp.h build\tbox\platform\windows\interface\dbghelp.h
	@xmake l cp src\tbox\platform\windows\interface\interface.h build\tbox\platform\windows\interface\interface.h
	@xmake l cp src\tbox\platform\windows\interface\iphlpapi.h build\tbox\platform\windows\interface\iphlpapi.h
	@xmake l cp src\tbox\platform\windows\interface\kernel32.h build\tbox\platform\windows\interface\kernel32.h
	@xmake l cp src\tbox\platform\windows\interface\mswsock.h build\tbox\platform\windows\interface\mswsock.h
	@xmake l cp src\tbox\platform\windows\interface\prefix.h build\tbox\platform\windows\interface\prefix.h
	@xmake l cp src\tbox\platform\windows\interface\shell32.h build\tbox\platform\windows\interface\shell32.h
	@xmake l cp src\tbox\platform\windows\interface\user32.h build\tbox\platform\windows\interface\user32.h
	@xmake l cp src\tbox\platform\windows\interface\ws2_32.h build\tbox\platform\windows\interface\ws2_32.h
	@xmake l cp src\tbox\platform\windows\ntstatus.h build\tbox\platform\windows\ntstatus.h
	@xmake l cp src\tbox\platform\windows\prefix.h build\tbox\platform\windows\prefix.h
	@xmake l cp src\tbox\platform\windows\socket_pool.h build\tbox\platform\windows\socket_pool.h
	@xmake l cp src\tbox\prefix\abort.h build\tbox\prefix\abort.h
	@xmake l cp src\tbox\prefix\arch.h build\tbox\prefix\arch.h
	@xmake l cp src\tbox\prefix\asm\arm\prefix.h build\tbox\prefix\asm\arm\prefix.h
	@xmake l cp src\tbox\prefix\asm\asm.h build\tbox\prefix\asm\asm.h
	@xmake l cp src\tbox\prefix\asm\cache.h build\tbox\prefix\asm\cache.h
	@xmake l cp src\tbox\prefix\asm\prefix.h build\tbox\prefix\asm\prefix.h
	@xmake l cp src\tbox\prefix\asm.h build\tbox\prefix\asm.h
	@xmake l cp src\tbox\prefix\assembler.h build\tbox\prefix\assembler.h
	@xmake l cp src\tbox\prefix\assert.h build\tbox\prefix\assert.h
	@xmake l cp src\tbox\prefix\check.h build\tbox\prefix\check.h
	@xmake l cp src\tbox\prefix\compiler.h build\tbox\prefix\compiler.h
	@xmake l cp src\tbox\prefix\config.h build\tbox\prefix\config.h
	@xmake l cp src\tbox\prefix\cpu.h build\tbox\prefix\cpu.h
	@xmake l cp src\tbox\prefix\endian.h build\tbox\prefix\endian.h
	@xmake l cp src\tbox\prefix\keyword.h build\tbox\prefix\keyword.h
	@xmake l cp src\tbox\prefix\limits.h build\tbox\prefix\limits.h
	@xmake l cp src\tbox\prefix\malloc.h build\tbox\prefix\malloc.h
	@xmake l cp src\tbox\prefix\packed.h build\tbox\prefix\packed.h
	@xmake l cp src\tbox\prefix\prefix.h build\tbox\prefix\prefix.h
	@xmake l cp src\tbox\prefix\state.h build\tbox\prefix\state.h
	@xmake l cp src\tbox\prefix\trace.h build\tbox\prefix\trace.h
	@xmake l cp src\tbox\prefix\type.h build\tbox\prefix\type.h
	@xmake l cp src\tbox\prefix\utils.h build\tbox\prefix\utils.h
	@xmake l cp src\tbox\prefix\version.h build\tbox\prefix\version.h
	@xmake l cp src\tbox\prefix.h build\tbox\prefix.h
	@xmake l cp src\tbox\regex\prefix.h build\tbox\regex\prefix.h
	@xmake l cp src\tbox\regex\regex.h build\tbox\regex\regex.h
	@xmake l cp src\tbox\stream\async_stream.h build\tbox\stream\async_stream.h
	@xmake l cp src\tbox\stream\async_transfer.h build\tbox\stream\async_transfer.h
	@xmake l cp src\tbox\stream\filter.h build\tbox\stream\filter.h
	@xmake l cp src\tbox\stream\prefix.h build\tbox\stream\prefix.h
	@xmake l cp src\tbox\stream\static_stream.h build\tbox\stream\static_stream.h
	@xmake l cp src\tbox\stream\stream.h build\tbox\stream\stream.h
	@xmake l cp src\tbox\stream\transfer.h build\tbox\stream\transfer.h
	@xmake l cp src\tbox\stream\transfer_pool.h build\tbox\stream\transfer_pool.h
	@xmake l cp src\tbox\string\prefix.h build\tbox\string\prefix.h
	@xmake l cp src\tbox\string\static_string.h build\tbox\string\static_string.h
	@xmake l cp src\tbox\string\string.h build\tbox\string\string.h
	@xmake l cp src\tbox\tbox.h build\tbox\tbox.h
	@xmake l cp src\tbox\utils\adler32.h build\tbox\utils\adler32.h
	@xmake l cp src\tbox\utils\base32.h build\tbox\utils\base32.h
	@xmake l cp src\tbox\utils\base64.h build\tbox\utils\base64.h
	@xmake l cp src\tbox\utils\bits.h build\tbox\utils\bits.h
	@xmake l cp src\tbox\utils\crc.h build\tbox\utils\crc.h
	@xmake l cp src\tbox\utils\dump.h build\tbox\utils\dump.h
	@xmake l cp src\tbox\utils\fnv32.h build\tbox\utils\fnv32.h
	@xmake l cp src\tbox\utils\lock_profiler.h build\tbox\utils\lock_profiler.h
	@xmake l cp src\tbox\utils\md5.h build\tbox\utils\md5.h
	@xmake l cp src\tbox\utils\option.h build\tbox\utils\option.h
	@xmake l cp src\tbox\utils\prefix.h build\tbox\utils\prefix.h
	@xmake l cp src\tbox\utils\sha.h build\tbox\utils\sha.h
	@xmake l cp src\tbox\utils\singleton.h build\tbox\utils\singleton.h
	@xmake l cp src\tbox\utils\trace.h build\tbox\utils\trace.h
	@xmake l cp src\tbox\utils\url.h build\tbox\utils\url.h
	@xmake l cp src\tbox\utils\used.h build\tbox\utils\used.h
	@xmake l cp src\tbox\utils\utils.h build\tbox\utils\utils.h
	@xmake l cp src\tbox\xml\node.h build\tbox\xml\node.h
	@xmake l cp src\tbox\xml\prefix.h build\tbox\xml\prefix.h
	@xmake l cp src\tbox\xml\reader.h build\tbox\xml\reader.h
	@xmake l cp src\tbox\xml\writer.h build\tbox\xml\writer.h
	@xmake l cp src\tbox\xml\xml.h build\tbox\xml\xml.h
	@xmake l cp src\tbox\zip\gzip.h build\tbox\zip\gzip.h
	@xmake l cp src\tbox\zip\prefix.h build\tbox\zip\prefix.h
	@xmake l cp src\tbox\zip\zip.h build\tbox\zip\zip.h
	@xmake l cp src\tbox\zip\zlib.h build\tbox\zip\zlib.h
	@xmake l cp src\tbox\zip\zlibraw.h build\tbox\zip\zlibraw.h
	@xmake l cp src\tbox\prefix\asm\arm\prefix.S build\tbox\prefix\asm\arm\prefix.S
	@xmake l cp src\tbox\prefix\asm\prefix.S build\tbox\prefix\asm\prefix.S
	@xmake l cp src\tbox\math\impl\fixed16_arm.h build\tbox\math\impl\fixed16_arm.h
	@xmake l cp src\tbox\math\impl\fixed30_arm.h build\tbox\math\impl\fixed30_arm.h
	@xmake l cp src\tbox\math\impl\prefix.h build\tbox\math\impl\prefix.h
	@xmake l cp src\tbox\math\impl\random.h build\tbox\math\impl\random.h
	@xmake l cp src\tbox\utils\impl\bits_arm.h build\tbox\utils\impl\bits_arm.h
	@xmake l cp src\tbox\utils\impl\bits_gcc.h build\tbox\utils\impl\bits_gcc.h
	@xmake l cp src\tbox\utils\impl\bits_sh4.h build\tbox\utils\impl\bits_sh4.h
	@xmake l cp src\tbox\utils\impl\bits_x86.h build\tbox\utils\impl\bits_x86.h
	@xmake l cp src\tbox\utils\impl\crc_arm.h build\tbox\utils\impl\crc_arm.h
	@xmake l cp src\tbox\utils\impl\prefix.h build\tbox\utils\impl\prefix.h

build\.objs\tbox\src\tbox\tbox.obj: src\tbox\tbox.c
	@echo compiling.release src\tbox\tbox.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\tbox.obj%20src\tbox\tbox.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\tbox.obj src\tbox\tbox.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\math\fixed16.obj: src\tbox\math\fixed16.c
	@echo compiling.release src\tbox\math\fixed16.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\math\fixed16.obj%20src\tbox\math\fixed16.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\math
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\math\fixed16.obj src\tbox\math\fixed16.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\math\impl\random_linear.obj: src\tbox\math\impl\random_linear.c
	@echo compiling.release src\tbox\math\impl\random_linear.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\math\impl\random_linear.obj%20src\tbox\math\impl\random_linear.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\math\impl
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\math\impl\random_linear.obj src\tbox\math\impl\random_linear.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\math\int32.obj: src\tbox\math\int32.c
	@echo compiling.release src\tbox\math\int32.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\math\int32.obj%20src\tbox\math\int32.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\math
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\math\int32.obj src\tbox\math\int32.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\math\math.obj: src\tbox\math\math.c
	@echo compiling.release src\tbox\math\math.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\math\math.obj%20src\tbox\math\math.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\math
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\math\math.obj src\tbox\math\math.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\math\random.obj: src\tbox\math\random.c
	@echo compiling.release src\tbox\math\random.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\math\random.obj%20src\tbox\math\random.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\math
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\math\random.obj src\tbox\math\random.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\libc.obj: src\tbox\libc\libc.c
	@echo compiling.release src\tbox\libc\libc.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\libc.obj%20src\tbox\libc\libc.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\libc.obj src\tbox\libc\libc.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\misc\time\gmmktime.obj: src\tbox\libc\misc\time\gmmktime.c
	@echo compiling.release src\tbox\libc\misc\time\gmmktime.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\misc\time\gmmktime.obj%20src\tbox\libc\misc\time\gmmktime.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\misc\time
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\misc\time\gmmktime.obj src\tbox\libc\misc\time\gmmktime.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\misc\time\gmtime.obj: src\tbox\libc\misc\time\gmtime.c
	@echo compiling.release src\tbox\libc\misc\time\gmtime.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\misc\time\gmtime.obj%20src\tbox\libc\misc\time\gmtime.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\misc\time
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\misc\time\gmtime.obj src\tbox\libc\misc\time\gmtime.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\misc\time\localtime.obj: src\tbox\libc\misc\time\localtime.c
	@echo compiling.release src\tbox\libc\misc\time\localtime.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\misc\time\localtime.obj%20src\tbox\libc\misc\time\localtime.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\misc\time
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\misc\time\localtime.obj src\tbox\libc\misc\time\localtime.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\misc\time\mktime.obj: src\tbox\libc\misc\time\mktime.c
	@echo compiling.release src\tbox\libc\misc\time\mktime.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\misc\time\mktime.obj%20src\tbox\libc\misc\time\mktime.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\misc\time
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\misc\time\mktime.obj src\tbox\libc\misc\time\mktime.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\misc\time\time.obj: src\tbox\libc\misc\time\time.c
	@echo compiling.release src\tbox\libc\misc\time\time.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\misc\time\time.obj%20src\tbox\libc\misc\time\time.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\misc\time
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\misc\time\time.obj src\tbox\libc\misc\time\time.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\stdio\printf.obj: src\tbox\libc\stdio\printf.c
	@echo compiling.release src\tbox\libc\stdio\printf.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\stdio\printf.obj%20src\tbox\libc\stdio\printf.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\stdio
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\stdio\printf.obj src\tbox\libc\stdio\printf.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\stdio\printf_object.obj: src\tbox\libc\stdio\printf_object.c
	@echo compiling.release src\tbox\libc\stdio\printf_object.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\stdio\printf_object.obj%20src\tbox\libc\stdio\printf_object.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\stdio
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\stdio\printf_object.obj src\tbox\libc\stdio\printf_object.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\stdio\puts.obj: src\tbox\libc\stdio\puts.c
	@echo compiling.release src\tbox\libc\stdio\puts.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\stdio\puts.obj%20src\tbox\libc\stdio\puts.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\stdio
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\stdio\puts.obj src\tbox\libc\stdio\puts.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\stdio\snprintf.obj: src\tbox\libc\stdio\snprintf.c
	@echo compiling.release src\tbox\libc\stdio\snprintf.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\stdio\snprintf.obj%20src\tbox\libc\stdio\snprintf.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\stdio
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\stdio\snprintf.obj src\tbox\libc\stdio\snprintf.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\stdio\sprintf.obj: src\tbox\libc\stdio\sprintf.c
	@echo compiling.release src\tbox\libc\stdio\sprintf.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\stdio\sprintf.obj%20src\tbox\libc\stdio\sprintf.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\stdio
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\stdio\sprintf.obj src\tbox\libc\stdio\sprintf.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\stdio\swprintf.obj: src\tbox\libc\stdio\swprintf.c
	@echo compiling.release src\tbox\libc\stdio\swprintf.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\stdio\swprintf.obj%20src\tbox\libc\stdio\swprintf.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\stdio
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\stdio\swprintf.obj src\tbox\libc\stdio\swprintf.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\stdio\vsnprintf.obj: src\tbox\libc\stdio\vsnprintf.c
	@echo compiling.release src\tbox\libc\stdio\vsnprintf.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\stdio\vsnprintf.obj%20src\tbox\libc\stdio\vsnprintf.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\stdio
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\stdio\vsnprintf.obj src\tbox\libc\stdio\vsnprintf.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\stdio\vswprintf.obj: src\tbox\libc\stdio\vswprintf.c
	@echo compiling.release src\tbox\libc\stdio\vswprintf.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\stdio\vswprintf.obj%20src\tbox\libc\stdio\vswprintf.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\stdio
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\stdio\vswprintf.obj src\tbox\libc\stdio\vswprintf.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\stdio\wprintf.obj: src\tbox\libc\stdio\wprintf.c
	@echo compiling.release src\tbox\libc\stdio\wprintf.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\stdio\wprintf.obj%20src\tbox\libc\stdio\wprintf.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\stdio
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\stdio\wprintf.obj src\tbox\libc\stdio\wprintf.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\stdio\wputs.obj: src\tbox\libc\stdio\wputs.c
	@echo compiling.release src\tbox\libc\stdio\wputs.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\stdio\wputs.obj%20src\tbox\libc\stdio\wputs.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\stdio
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\stdio\wputs.obj src\tbox\libc\stdio\wputs.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\stdlib\mbstowcs.obj: src\tbox\libc\stdlib\mbstowcs.c
	@echo compiling.release src\tbox\libc\stdlib\mbstowcs.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\stdlib\mbstowcs.obj%20src\tbox\libc\stdlib\mbstowcs.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\stdlib
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\stdlib\mbstowcs.obj src\tbox\libc\stdlib\mbstowcs.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\stdlib\random.obj: src\tbox\libc\stdlib\random.c
	@echo compiling.release src\tbox\libc\stdlib\random.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\stdlib\random.obj%20src\tbox\libc\stdlib\random.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\stdlib
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\stdlib\random.obj src\tbox\libc\stdlib\random.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\stdlib\stdlib.obj: src\tbox\libc\stdlib\stdlib.c
	@echo compiling.release src\tbox\libc\stdlib\stdlib.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\stdlib\stdlib.obj%20src\tbox\libc\stdlib\stdlib.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\stdlib
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\stdlib\stdlib.obj src\tbox\libc\stdlib\stdlib.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\stdlib\wcstombs.obj: src\tbox\libc\stdlib\wcstombs.c
	@echo compiling.release src\tbox\libc\stdlib\wcstombs.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\stdlib\wcstombs.obj%20src\tbox\libc\stdlib\wcstombs.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\stdlib
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\stdlib\wcstombs.obj src\tbox\libc\stdlib\wcstombs.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\memcmp.obj: src\tbox\libc\string\memcmp.c
	@echo compiling.release src\tbox\libc\string\memcmp.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\memcmp.obj%20src\tbox\libc\string\memcmp.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\memcmp.obj src\tbox\libc\string\memcmp.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\memcpy.obj: src\tbox\libc\string\memcpy.c
	@echo compiling.release src\tbox\libc\string\memcpy.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\memcpy.obj%20src\tbox\libc\string\memcpy.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\memcpy.obj src\tbox\libc\string\memcpy.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\memdup.obj: src\tbox\libc\string\memdup.c
	@echo compiling.release src\tbox\libc\string\memdup.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\memdup.obj%20src\tbox\libc\string\memdup.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\memdup.obj src\tbox\libc\string\memdup.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\memmem.obj: src\tbox\libc\string\memmem.c
	@echo compiling.release src\tbox\libc\string\memmem.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\memmem.obj%20src\tbox\libc\string\memmem.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\memmem.obj src\tbox\libc\string\memmem.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\memmov.obj: src\tbox\libc\string\memmov.c
	@echo compiling.release src\tbox\libc\string\memmov.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\memmov.obj%20src\tbox\libc\string\memmov.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\memmov.obj src\tbox\libc\string\memmov.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\memset.obj: src\tbox\libc\string\memset.c
	@echo compiling.release src\tbox\libc\string\memset.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\memset.obj%20src\tbox\libc\string\memset.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\memset.obj src\tbox\libc\string\memset.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\strcat.obj: src\tbox\libc\string\strcat.c
	@echo compiling.release src\tbox\libc\string\strcat.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\strcat.obj%20src\tbox\libc\string\strcat.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\strcat.obj src\tbox\libc\string\strcat.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\strchr.obj: src\tbox\libc\string\strchr.c
	@echo compiling.release src\tbox\libc\string\strchr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\strchr.obj%20src\tbox\libc\string\strchr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\strchr.obj src\tbox\libc\string\strchr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\strcmp.obj: src\tbox\libc\string\strcmp.c
	@echo compiling.release src\tbox\libc\string\strcmp.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\strcmp.obj%20src\tbox\libc\string\strcmp.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\strcmp.obj src\tbox\libc\string\strcmp.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\strcpy.obj: src\tbox\libc\string\strcpy.c
	@echo compiling.release src\tbox\libc\string\strcpy.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\strcpy.obj%20src\tbox\libc\string\strcpy.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\strcpy.obj src\tbox\libc\string\strcpy.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\strdup.obj: src\tbox\libc\string\strdup.c
	@echo compiling.release src\tbox\libc\string\strdup.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\strdup.obj%20src\tbox\libc\string\strdup.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\strdup.obj src\tbox\libc\string\strdup.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\strichr.obj: src\tbox\libc\string\strichr.c
	@echo compiling.release src\tbox\libc\string\strichr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\strichr.obj%20src\tbox\libc\string\strichr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\strichr.obj src\tbox\libc\string\strichr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\stricmp.obj: src\tbox\libc\string\stricmp.c
	@echo compiling.release src\tbox\libc\string\stricmp.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\stricmp.obj%20src\tbox\libc\string\stricmp.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\stricmp.obj src\tbox\libc\string\stricmp.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\strirchr.obj: src\tbox\libc\string\strirchr.c
	@echo compiling.release src\tbox\libc\string\strirchr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\strirchr.obj%20src\tbox\libc\string\strirchr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\strirchr.obj src\tbox\libc\string\strirchr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\strirstr.obj: src\tbox\libc\string\strirstr.c
	@echo compiling.release src\tbox\libc\string\strirstr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\strirstr.obj%20src\tbox\libc\string\strirstr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\strirstr.obj src\tbox\libc\string\strirstr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\stristr.obj: src\tbox\libc\string\stristr.c
	@echo compiling.release src\tbox\libc\string\stristr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\stristr.obj%20src\tbox\libc\string\stristr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\stristr.obj src\tbox\libc\string\stristr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\strlcpy.obj: src\tbox\libc\string\strlcpy.c
	@echo compiling.release src\tbox\libc\string\strlcpy.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\strlcpy.obj%20src\tbox\libc\string\strlcpy.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\strlcpy.obj src\tbox\libc\string\strlcpy.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\strlen.obj: src\tbox\libc\string\strlen.c
	@echo compiling.release src\tbox\libc\string\strlen.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\strlen.obj%20src\tbox\libc\string\strlen.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\strlen.obj src\tbox\libc\string\strlen.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\strncat.obj: src\tbox\libc\string\strncat.c
	@echo compiling.release src\tbox\libc\string\strncat.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\strncat.obj%20src\tbox\libc\string\strncat.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\strncat.obj src\tbox\libc\string\strncat.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\strncmp.obj: src\tbox\libc\string\strncmp.c
	@echo compiling.release src\tbox\libc\string\strncmp.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\strncmp.obj%20src\tbox\libc\string\strncmp.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\strncmp.obj src\tbox\libc\string\strncmp.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\strncpy.obj: src\tbox\libc\string\strncpy.c
	@echo compiling.release src\tbox\libc\string\strncpy.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\strncpy.obj%20src\tbox\libc\string\strncpy.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\strncpy.obj src\tbox\libc\string\strncpy.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\strndup.obj: src\tbox\libc\string\strndup.c
	@echo compiling.release src\tbox\libc\string\strndup.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\strndup.obj%20src\tbox\libc\string\strndup.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\strndup.obj src\tbox\libc\string\strndup.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\strnicmp.obj: src\tbox\libc\string\strnicmp.c
	@echo compiling.release src\tbox\libc\string\strnicmp.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\strnicmp.obj%20src\tbox\libc\string\strnicmp.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\strnicmp.obj src\tbox\libc\string\strnicmp.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\strnirchr.obj: src\tbox\libc\string\strnirchr.c
	@echo compiling.release src\tbox\libc\string\strnirchr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\strnirchr.obj%20src\tbox\libc\string\strnirchr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\strnirchr.obj src\tbox\libc\string\strnirchr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\strnirstr.obj: src\tbox\libc\string\strnirstr.c
	@echo compiling.release src\tbox\libc\string\strnirstr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\strnirstr.obj%20src\tbox\libc\string\strnirstr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\strnirstr.obj src\tbox\libc\string\strnirstr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\strnistr.obj: src\tbox\libc\string\strnistr.c
	@echo compiling.release src\tbox\libc\string\strnistr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\strnistr.obj%20src\tbox\libc\string\strnistr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\strnistr.obj src\tbox\libc\string\strnistr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\strnlen.obj: src\tbox\libc\string\strnlen.c
	@echo compiling.release src\tbox\libc\string\strnlen.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\strnlen.obj%20src\tbox\libc\string\strnlen.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\strnlen.obj src\tbox\libc\string\strnlen.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\strnrchr.obj: src\tbox\libc\string\strnrchr.c
	@echo compiling.release src\tbox\libc\string\strnrchr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\strnrchr.obj%20src\tbox\libc\string\strnrchr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\strnrchr.obj src\tbox\libc\string\strnrchr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\strnrstr.obj: src\tbox\libc\string\strnrstr.c
	@echo compiling.release src\tbox\libc\string\strnrstr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\strnrstr.obj%20src\tbox\libc\string\strnrstr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\strnrstr.obj src\tbox\libc\string\strnrstr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\strnstr.obj: src\tbox\libc\string\strnstr.c
	@echo compiling.release src\tbox\libc\string\strnstr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\strnstr.obj%20src\tbox\libc\string\strnstr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\strnstr.obj src\tbox\libc\string\strnstr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\strrchr.obj: src\tbox\libc\string\strrchr.c
	@echo compiling.release src\tbox\libc\string\strrchr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\strrchr.obj%20src\tbox\libc\string\strrchr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\strrchr.obj src\tbox\libc\string\strrchr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\strrstr.obj: src\tbox\libc\string\strrstr.c
	@echo compiling.release src\tbox\libc\string\strrstr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\strrstr.obj%20src\tbox\libc\string\strrstr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\strrstr.obj src\tbox\libc\string\strrstr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\strstr.obj: src\tbox\libc\string\strstr.c
	@echo compiling.release src\tbox\libc\string\strstr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\strstr.obj%20src\tbox\libc\string\strstr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\strstr.obj src\tbox\libc\string\strstr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\wcscat.obj: src\tbox\libc\string\wcscat.c
	@echo compiling.release src\tbox\libc\string\wcscat.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\wcscat.obj%20src\tbox\libc\string\wcscat.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\wcscat.obj src\tbox\libc\string\wcscat.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\wcschr.obj: src\tbox\libc\string\wcschr.c
	@echo compiling.release src\tbox\libc\string\wcschr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\wcschr.obj%20src\tbox\libc\string\wcschr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\wcschr.obj src\tbox\libc\string\wcschr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\wcscmp.obj: src\tbox\libc\string\wcscmp.c
	@echo compiling.release src\tbox\libc\string\wcscmp.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\wcscmp.obj%20src\tbox\libc\string\wcscmp.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\wcscmp.obj src\tbox\libc\string\wcscmp.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\wcscpy.obj: src\tbox\libc\string\wcscpy.c
	@echo compiling.release src\tbox\libc\string\wcscpy.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\wcscpy.obj%20src\tbox\libc\string\wcscpy.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\wcscpy.obj src\tbox\libc\string\wcscpy.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\wcsdup.obj: src\tbox\libc\string\wcsdup.c
	@echo compiling.release src\tbox\libc\string\wcsdup.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\wcsdup.obj%20src\tbox\libc\string\wcsdup.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\wcsdup.obj src\tbox\libc\string\wcsdup.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\wcsichr.obj: src\tbox\libc\string\wcsichr.c
	@echo compiling.release src\tbox\libc\string\wcsichr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\wcsichr.obj%20src\tbox\libc\string\wcsichr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\wcsichr.obj src\tbox\libc\string\wcsichr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\wcsicmp.obj: src\tbox\libc\string\wcsicmp.c
	@echo compiling.release src\tbox\libc\string\wcsicmp.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\wcsicmp.obj%20src\tbox\libc\string\wcsicmp.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\wcsicmp.obj src\tbox\libc\string\wcsicmp.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\wcsirchr.obj: src\tbox\libc\string\wcsirchr.c
	@echo compiling.release src\tbox\libc\string\wcsirchr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\wcsirchr.obj%20src\tbox\libc\string\wcsirchr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\wcsirchr.obj src\tbox\libc\string\wcsirchr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\wcsirstr.obj: src\tbox\libc\string\wcsirstr.c
	@echo compiling.release src\tbox\libc\string\wcsirstr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\wcsirstr.obj%20src\tbox\libc\string\wcsirstr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\wcsirstr.obj src\tbox\libc\string\wcsirstr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\wcsistr.obj: src\tbox\libc\string\wcsistr.c
	@echo compiling.release src\tbox\libc\string\wcsistr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\wcsistr.obj%20src\tbox\libc\string\wcsistr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\wcsistr.obj src\tbox\libc\string\wcsistr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\wcslcpy.obj: src\tbox\libc\string\wcslcpy.c
	@echo compiling.release src\tbox\libc\string\wcslcpy.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\wcslcpy.obj%20src\tbox\libc\string\wcslcpy.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\wcslcpy.obj src\tbox\libc\string\wcslcpy.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\wcslen.obj: src\tbox\libc\string\wcslen.c
	@echo compiling.release src\tbox\libc\string\wcslen.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\wcslen.obj%20src\tbox\libc\string\wcslen.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\wcslen.obj src\tbox\libc\string\wcslen.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\wcsncat.obj: src\tbox\libc\string\wcsncat.c
	@echo compiling.release src\tbox\libc\string\wcsncat.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\wcsncat.obj%20src\tbox\libc\string\wcsncat.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\wcsncat.obj src\tbox\libc\string\wcsncat.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\wcsncmp.obj: src\tbox\libc\string\wcsncmp.c
	@echo compiling.release src\tbox\libc\string\wcsncmp.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\wcsncmp.obj%20src\tbox\libc\string\wcsncmp.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\wcsncmp.obj src\tbox\libc\string\wcsncmp.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\wcsncpy.obj: src\tbox\libc\string\wcsncpy.c
	@echo compiling.release src\tbox\libc\string\wcsncpy.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\wcsncpy.obj%20src\tbox\libc\string\wcsncpy.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\wcsncpy.obj src\tbox\libc\string\wcsncpy.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\wcsndup.obj: src\tbox\libc\string\wcsndup.c
	@echo compiling.release src\tbox\libc\string\wcsndup.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\wcsndup.obj%20src\tbox\libc\string\wcsndup.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\wcsndup.obj src\tbox\libc\string\wcsndup.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\wcsnicmp.obj: src\tbox\libc\string\wcsnicmp.c
	@echo compiling.release src\tbox\libc\string\wcsnicmp.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\wcsnicmp.obj%20src\tbox\libc\string\wcsnicmp.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\wcsnicmp.obj src\tbox\libc\string\wcsnicmp.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\wcsnirchr.obj: src\tbox\libc\string\wcsnirchr.c
	@echo compiling.release src\tbox\libc\string\wcsnirchr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\wcsnirchr.obj%20src\tbox\libc\string\wcsnirchr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\wcsnirchr.obj src\tbox\libc\string\wcsnirchr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\wcsnirstr.obj: src\tbox\libc\string\wcsnirstr.c
	@echo compiling.release src\tbox\libc\string\wcsnirstr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\wcsnirstr.obj%20src\tbox\libc\string\wcsnirstr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\wcsnirstr.obj src\tbox\libc\string\wcsnirstr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\wcsnlen.obj: src\tbox\libc\string\wcsnlen.c
	@echo compiling.release src\tbox\libc\string\wcsnlen.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\wcsnlen.obj%20src\tbox\libc\string\wcsnlen.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\wcsnlen.obj src\tbox\libc\string\wcsnlen.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\wcsnrchr.obj: src\tbox\libc\string\wcsnrchr.c
	@echo compiling.release src\tbox\libc\string\wcsnrchr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\wcsnrchr.obj%20src\tbox\libc\string\wcsnrchr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\wcsnrchr.obj src\tbox\libc\string\wcsnrchr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\wcsnrstr.obj: src\tbox\libc\string\wcsnrstr.c
	@echo compiling.release src\tbox\libc\string\wcsnrstr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\wcsnrstr.obj%20src\tbox\libc\string\wcsnrstr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\wcsnrstr.obj src\tbox\libc\string\wcsnrstr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\wcsrchr.obj: src\tbox\libc\string\wcsrchr.c
	@echo compiling.release src\tbox\libc\string\wcsrchr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\wcsrchr.obj%20src\tbox\libc\string\wcsrchr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\wcsrchr.obj src\tbox\libc\string\wcsrchr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\wcsrstr.obj: src\tbox\libc\string\wcsrstr.c
	@echo compiling.release src\tbox\libc\string\wcsrstr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\wcsrstr.obj%20src\tbox\libc\string\wcsrstr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\wcsrstr.obj src\tbox\libc\string\wcsrstr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libc\string\wcsstr.obj: src\tbox\libc\string\wcsstr.c
	@echo compiling.release src\tbox\libc\string\wcsstr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libc\string\wcsstr.obj%20src\tbox\libc\string\wcsstr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libc\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libc\string\wcsstr.obj src\tbox\libc\string\wcsstr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\utils\adler32.obj: src\tbox\utils\adler32.c
	@echo compiling.release src\tbox\utils\adler32.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\utils\adler32.obj%20src\tbox\utils\adler32.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\utils
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\utils\adler32.obj src\tbox\utils\adler32.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\utils\base32.obj: src\tbox\utils\base32.c
	@echo compiling.release src\tbox\utils\base32.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\utils\base32.obj%20src\tbox\utils\base32.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\utils
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\utils\base32.obj src\tbox\utils\base32.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\utils\base64.obj: src\tbox\utils\base64.c
	@echo compiling.release src\tbox\utils\base64.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\utils\base64.obj%20src\tbox\utils\base64.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\utils
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\utils\base64.obj src\tbox\utils\base64.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\utils\bits.obj: src\tbox\utils\bits.c
	@echo compiling.release src\tbox\utils\bits.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\utils\bits.obj%20src\tbox\utils\bits.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\utils
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\utils\bits.obj src\tbox\utils\bits.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\utils\crc.obj: src\tbox\utils\crc.c
	@echo compiling.release src\tbox\utils\crc.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\utils\crc.obj%20src\tbox\utils\crc.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\utils
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\utils\crc.obj src\tbox\utils\crc.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\utils\dump.obj: src\tbox\utils\dump.c
	@echo compiling.release src\tbox\utils\dump.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\utils\dump.obj%20src\tbox\utils\dump.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\utils
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\utils\dump.obj src\tbox\utils\dump.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\utils\fnv32.obj: src\tbox\utils\fnv32.c
	@echo compiling.release src\tbox\utils\fnv32.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\utils\fnv32.obj%20src\tbox\utils\fnv32.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\utils
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\utils\fnv32.obj src\tbox\utils\fnv32.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\utils\lock_profiler.obj: src\tbox\utils\lock_profiler.c
	@echo compiling.release src\tbox\utils\lock_profiler.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\utils\lock_profiler.obj%20src\tbox\utils\lock_profiler.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\utils
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\utils\lock_profiler.obj src\tbox\utils\lock_profiler.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\utils\md5.obj: src\tbox\utils\md5.c
	@echo compiling.release src\tbox\utils\md5.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\utils\md5.obj%20src\tbox\utils\md5.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\utils
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\utils\md5.obj src\tbox\utils\md5.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\utils\sha.obj: src\tbox\utils\sha.c
	@echo compiling.release src\tbox\utils\sha.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\utils\sha.obj%20src\tbox\utils\sha.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\utils
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\utils\sha.obj src\tbox\utils\sha.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\utils\singleton.obj: src\tbox\utils\singleton.c
	@echo compiling.release src\tbox\utils\singleton.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\utils\singleton.obj%20src\tbox\utils\singleton.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\utils
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\utils\singleton.obj src\tbox\utils\singleton.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\utils\trace.obj: src\tbox\utils\trace.c
	@echo compiling.release src\tbox\utils\trace.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\utils\trace.obj%20src\tbox\utils\trace.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\utils
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\utils\trace.obj src\tbox\utils\trace.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\utils\url.obj: src\tbox\utils\url.c
	@echo compiling.release src\tbox\utils\url.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\utils\url.obj%20src\tbox\utils\url.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\utils
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\utils\url.obj src\tbox\utils\url.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\utils\used.obj: src\tbox\utils\used.c
	@echo compiling.release src\tbox\utils\used.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\utils\used.obj%20src\tbox\utils\used.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\utils
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\utils\used.obj src\tbox\utils\used.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\prefix\state.obj: src\tbox\prefix\state.c
	@echo compiling.release src\tbox\prefix\state.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\prefix\state.obj%20src\tbox\prefix\state.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\prefix
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\prefix\state.obj src\tbox\prefix\state.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\memory\allocator.obj: src\tbox\memory\allocator.c
	@echo compiling.release src\tbox\memory\allocator.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\memory\allocator.obj%20src\tbox\memory\allocator.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\memory
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\memory\allocator.obj src\tbox\memory\allocator.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\memory\buffer.obj: src\tbox\memory\buffer.c
	@echo compiling.release src\tbox\memory\buffer.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\memory\buffer.obj%20src\tbox\memory\buffer.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\memory
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\memory\buffer.obj src\tbox\memory\buffer.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\memory\default_allocator.obj: src\tbox\memory\default_allocator.c
	@echo compiling.release src\tbox\memory\default_allocator.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\memory\default_allocator.obj%20src\tbox\memory\default_allocator.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\memory
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\memory\default_allocator.obj src\tbox\memory\default_allocator.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\memory\fixed_pool.obj: src\tbox\memory\fixed_pool.c
	@echo compiling.release src\tbox\memory\fixed_pool.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\memory\fixed_pool.obj%20src\tbox\memory\fixed_pool.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\memory
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\memory\fixed_pool.obj src\tbox\memory\fixed_pool.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\memory\impl\native_large_allocator.obj: src\tbox\memory\impl\native_large_allocator.c
	@echo compiling.release src\tbox\memory\impl\native_large_allocator.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\memory\impl\native_large_allocator.obj%20src\tbox\memory\impl\native_large_allocator.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\memory\impl
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\memory\impl\native_large_allocator.obj src\tbox\memory\impl\native_large_allocator.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\memory\impl\prefix.obj: src\tbox\memory\impl\prefix.c
	@echo compiling.release src\tbox\memory\impl\prefix.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\memory\impl\prefix.obj%20src\tbox\memory\impl\prefix.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\memory\impl
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\memory\impl\prefix.obj src\tbox\memory\impl\prefix.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\memory\impl\static_fixed_pool.obj: src\tbox\memory\impl\static_fixed_pool.c
	@echo compiling.release src\tbox\memory\impl\static_fixed_pool.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\memory\impl\static_fixed_pool.obj%20src\tbox\memory\impl\static_fixed_pool.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\memory\impl
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\memory\impl\static_fixed_pool.obj src\tbox\memory\impl\static_fixed_pool.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\memory\impl\static_large_allocator.obj: src\tbox\memory\impl\static_large_allocator.c
	@echo compiling.release src\tbox\memory\impl\static_large_allocator.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\memory\impl\static_large_allocator.obj%20src\tbox\memory\impl\static_large_allocator.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\memory\impl
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\memory\impl\static_large_allocator.obj src\tbox\memory\impl\static_large_allocator.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\memory\large_allocator.obj: src\tbox\memory\large_allocator.c
	@echo compiling.release src\tbox\memory\large_allocator.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\memory\large_allocator.obj%20src\tbox\memory\large_allocator.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\memory
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\memory\large_allocator.obj src\tbox\memory\large_allocator.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\memory\memory.obj: src\tbox\memory\memory.c
	@echo compiling.release src\tbox\memory\memory.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\memory\memory.obj%20src\tbox\memory\memory.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\memory
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\memory\memory.obj src\tbox\memory\memory.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\memory\native_allocator.obj: src\tbox\memory\native_allocator.c
	@echo compiling.release src\tbox\memory\native_allocator.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\memory\native_allocator.obj%20src\tbox\memory\native_allocator.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\memory
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\memory\native_allocator.obj src\tbox\memory\native_allocator.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\memory\queue_buffer.obj: src\tbox\memory\queue_buffer.c
	@echo compiling.release src\tbox\memory\queue_buffer.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\memory\queue_buffer.obj%20src\tbox\memory\queue_buffer.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\memory
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\memory\queue_buffer.obj src\tbox\memory\queue_buffer.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\memory\small_allocator.obj: src\tbox\memory\small_allocator.c
	@echo compiling.release src\tbox\memory\small_allocator.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\memory\small_allocator.obj%20src\tbox\memory\small_allocator.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\memory
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\memory\small_allocator.obj src\tbox\memory\small_allocator.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\memory\static_allocator.obj: src\tbox\memory\static_allocator.c
	@echo compiling.release src\tbox\memory\static_allocator.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\memory\static_allocator.obj%20src\tbox\memory\static_allocator.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\memory
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\memory\static_allocator.obj src\tbox\memory\static_allocator.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\memory\static_buffer.obj: src\tbox\memory\static_buffer.c
	@echo compiling.release src\tbox\memory\static_buffer.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\memory\static_buffer.obj%20src\tbox\memory\static_buffer.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\memory
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\memory\static_buffer.obj src\tbox\memory\static_buffer.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\memory\string_pool.obj: src\tbox\memory\string_pool.c
	@echo compiling.release src\tbox\memory\string_pool.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\memory\string_pool.obj%20src\tbox\memory\string_pool.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\memory
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\memory\string_pool.obj src\tbox\memory\string_pool.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\string\static_string.obj: src\tbox\string\static_string.c
	@echo compiling.release src\tbox\string\static_string.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\string\static_string.obj%20src\tbox\string\static_string.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\string\static_string.obj src\tbox\string\static_string.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\string\string.obj: src\tbox\string\string.c
	@echo compiling.release src\tbox\string\string.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\string\string.obj%20src\tbox\string\string.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\string\string.obj src\tbox\string\string.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\stream\filter.obj: src\tbox\stream\filter.c
	@echo compiling.release src\tbox\stream\filter.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\stream\filter.obj%20src\tbox\stream\filter.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\stream\filter.obj src\tbox\stream\filter.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\stream\impl\filter\cache.obj: src\tbox\stream\impl\filter\cache.c
	@echo compiling.release src\tbox\stream\impl\filter\cache.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\stream\impl\filter\cache.obj%20src\tbox\stream\impl\filter\cache.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\stream\impl\filter
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\stream\impl\filter\cache.obj src\tbox\stream\impl\filter\cache.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\stream\impl\stream\data.obj: src\tbox\stream\impl\stream\data.c
	@echo compiling.release src\tbox\stream\impl\stream\data.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\stream\impl\stream\data.obj%20src\tbox\stream\impl\stream\data.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\stream\impl\stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\stream\impl\stream\data.obj src\tbox\stream\impl\stream\data.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\stream\impl\stream\file.obj: src\tbox\stream\impl\stream\file.c
	@echo compiling.release src\tbox\stream\impl\stream\file.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\stream\impl\stream\file.obj%20src\tbox\stream\impl\stream\file.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\stream\impl\stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\stream\impl\stream\file.obj src\tbox\stream\impl\stream\file.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\stream\impl\stream\filter.obj: src\tbox\stream\impl\stream\filter.c
	@echo compiling.release src\tbox\stream\impl\stream\filter.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\stream\impl\stream\filter.obj%20src\tbox\stream\impl\stream\filter.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\stream\impl\stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\stream\impl\stream\filter.obj src\tbox\stream\impl\stream\filter.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\stream\static_stream.obj: src\tbox\stream\static_stream.c
	@echo compiling.release src\tbox\stream\static_stream.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\stream\static_stream.obj%20src\tbox\stream\static_stream.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\stream\static_stream.obj src\tbox\stream\static_stream.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\stream\stream.obj: src\tbox\stream\stream.c
	@echo compiling.release src\tbox\stream\stream.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\stream\stream.obj%20src\tbox\stream\stream.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\stream\stream.obj src\tbox\stream\stream.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\stream\transfer.obj: src\tbox\stream\transfer.c
	@echo compiling.release src\tbox\stream\transfer.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\stream\transfer.obj%20src\tbox\stream\transfer.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\stream\transfer.obj src\tbox\stream\transfer.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\algorithm\binary_find.obj: src\tbox\algorithm\binary_find.c
	@echo compiling.release src\tbox\algorithm\binary_find.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\algorithm\binary_find.obj%20src\tbox\algorithm\binary_find.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\algorithm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\algorithm\binary_find.obj src\tbox\algorithm\binary_find.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\algorithm\binary_find_if.obj: src\tbox\algorithm\binary_find_if.c
	@echo compiling.release src\tbox\algorithm\binary_find_if.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\algorithm\binary_find_if.obj%20src\tbox\algorithm\binary_find_if.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\algorithm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\algorithm\binary_find_if.obj src\tbox\algorithm\binary_find_if.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\algorithm\bubble_sort.obj: src\tbox\algorithm\bubble_sort.c
	@echo compiling.release src\tbox\algorithm\bubble_sort.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\algorithm\bubble_sort.obj%20src\tbox\algorithm\bubble_sort.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\algorithm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\algorithm\bubble_sort.obj src\tbox\algorithm\bubble_sort.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\algorithm\count.obj: src\tbox\algorithm\count.c
	@echo compiling.release src\tbox\algorithm\count.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\algorithm\count.obj%20src\tbox\algorithm\count.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\algorithm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\algorithm\count.obj src\tbox\algorithm\count.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\algorithm\count_if.obj: src\tbox\algorithm\count_if.c
	@echo compiling.release src\tbox\algorithm\count_if.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\algorithm\count_if.obj%20src\tbox\algorithm\count_if.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\algorithm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\algorithm\count_if.obj src\tbox\algorithm\count_if.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\algorithm\distance.obj: src\tbox\algorithm\distance.c
	@echo compiling.release src\tbox\algorithm\distance.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\algorithm\distance.obj%20src\tbox\algorithm\distance.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\algorithm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\algorithm\distance.obj src\tbox\algorithm\distance.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\algorithm\find.obj: src\tbox\algorithm\find.c
	@echo compiling.release src\tbox\algorithm\find.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\algorithm\find.obj%20src\tbox\algorithm\find.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\algorithm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\algorithm\find.obj src\tbox\algorithm\find.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\algorithm\find_if.obj: src\tbox\algorithm\find_if.c
	@echo compiling.release src\tbox\algorithm\find_if.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\algorithm\find_if.obj%20src\tbox\algorithm\find_if.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\algorithm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\algorithm\find_if.obj src\tbox\algorithm\find_if.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\algorithm\heap_sort.obj: src\tbox\algorithm\heap_sort.c
	@echo compiling.release src\tbox\algorithm\heap_sort.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\algorithm\heap_sort.obj%20src\tbox\algorithm\heap_sort.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\algorithm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\algorithm\heap_sort.obj src\tbox\algorithm\heap_sort.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\algorithm\insert_sort.obj: src\tbox\algorithm\insert_sort.c
	@echo compiling.release src\tbox\algorithm\insert_sort.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\algorithm\insert_sort.obj%20src\tbox\algorithm\insert_sort.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\algorithm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\algorithm\insert_sort.obj src\tbox\algorithm\insert_sort.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\algorithm\predicate.obj: src\tbox\algorithm\predicate.c
	@echo compiling.release src\tbox\algorithm\predicate.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\algorithm\predicate.obj%20src\tbox\algorithm\predicate.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\algorithm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\algorithm\predicate.obj src\tbox\algorithm\predicate.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\algorithm\quick_sort.obj: src\tbox\algorithm\quick_sort.c
	@echo compiling.release src\tbox\algorithm\quick_sort.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\algorithm\quick_sort.obj%20src\tbox\algorithm\quick_sort.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\algorithm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\algorithm\quick_sort.obj src\tbox\algorithm\quick_sort.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\algorithm\remove.obj: src\tbox\algorithm\remove.c
	@echo compiling.release src\tbox\algorithm\remove.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\algorithm\remove.obj%20src\tbox\algorithm\remove.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\algorithm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\algorithm\remove.obj src\tbox\algorithm\remove.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\algorithm\remove_first.obj: src\tbox\algorithm\remove_first.c
	@echo compiling.release src\tbox\algorithm\remove_first.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\algorithm\remove_first.obj%20src\tbox\algorithm\remove_first.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\algorithm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\algorithm\remove_first.obj src\tbox\algorithm\remove_first.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\algorithm\remove_first_if.obj: src\tbox\algorithm\remove_first_if.c
	@echo compiling.release src\tbox\algorithm\remove_first_if.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\algorithm\remove_first_if.obj%20src\tbox\algorithm\remove_first_if.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\algorithm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\algorithm\remove_first_if.obj src\tbox\algorithm\remove_first_if.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\algorithm\remove_if.obj: src\tbox\algorithm\remove_if.c
	@echo compiling.release src\tbox\algorithm\remove_if.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\algorithm\remove_if.obj%20src\tbox\algorithm\remove_if.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\algorithm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\algorithm\remove_if.obj src\tbox\algorithm\remove_if.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\algorithm\rfind.obj: src\tbox\algorithm\rfind.c
	@echo compiling.release src\tbox\algorithm\rfind.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\algorithm\rfind.obj%20src\tbox\algorithm\rfind.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\algorithm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\algorithm\rfind.obj src\tbox\algorithm\rfind.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\algorithm\rfind_if.obj: src\tbox\algorithm\rfind_if.c
	@echo compiling.release src\tbox\algorithm\rfind_if.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\algorithm\rfind_if.obj%20src\tbox\algorithm\rfind_if.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\algorithm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\algorithm\rfind_if.obj src\tbox\algorithm\rfind_if.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\algorithm\rwalk.obj: src\tbox\algorithm\rwalk.c
	@echo compiling.release src\tbox\algorithm\rwalk.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\algorithm\rwalk.obj%20src\tbox\algorithm\rwalk.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\algorithm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\algorithm\rwalk.obj src\tbox\algorithm\rwalk.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\algorithm\sort.obj: src\tbox\algorithm\sort.c
	@echo compiling.release src\tbox\algorithm\sort.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\algorithm\sort.obj%20src\tbox\algorithm\sort.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\algorithm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\algorithm\sort.obj src\tbox\algorithm\sort.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\algorithm\walk.obj: src\tbox\algorithm\walk.c
	@echo compiling.release src\tbox\algorithm\walk.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\algorithm\walk.obj%20src\tbox\algorithm\walk.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\algorithm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\algorithm\walk.obj src\tbox\algorithm\walk.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\bloom_filter.obj: src\tbox\container\bloom_filter.c
	@echo compiling.release src\tbox\container\bloom_filter.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\bloom_filter.obj%20src\tbox\container\bloom_filter.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\bloom_filter.obj src\tbox\container\bloom_filter.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\circle_queue.obj: src\tbox\container\circle_queue.c
	@echo compiling.release src\tbox\container\circle_queue.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\circle_queue.obj%20src\tbox\container\circle_queue.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\circle_queue.obj src\tbox\container\circle_queue.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\element\hash.obj: src\tbox\container\element\hash.c
	@echo compiling.release src\tbox\container\element\hash.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\element\hash.obj%20src\tbox\container\element\hash.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container\element
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\element\hash.obj src\tbox\container\element\hash.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\element\long.obj: src\tbox\container\element\long.c
	@echo compiling.release src\tbox\container\element\long.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\element\long.obj%20src\tbox\container\element\long.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container\element
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\element\long.obj src\tbox\container\element\long.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\element\mem.obj: src\tbox\container\element\mem.c
	@echo compiling.release src\tbox\container\element\mem.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\element\mem.obj%20src\tbox\container\element\mem.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container\element
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\element\mem.obj src\tbox\container\element\mem.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\element\null.obj: src\tbox\container\element\null.c
	@echo compiling.release src\tbox\container\element\null.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\element\null.obj%20src\tbox\container\element\null.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container\element
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\element\null.obj src\tbox\container\element\null.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\element\obj.obj: src\tbox\container\element\obj.c
	@echo compiling.release src\tbox\container\element\obj.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\element\obj.obj%20src\tbox\container\element\obj.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container\element
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\element\obj.obj src\tbox\container\element\obj.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\element\ptr.obj: src\tbox\container\element\ptr.c
	@echo compiling.release src\tbox\container\element\ptr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\element\ptr.obj%20src\tbox\container\element\ptr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container\element
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\element\ptr.obj src\tbox\container\element\ptr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\element\size.obj: src\tbox\container\element\size.c
	@echo compiling.release src\tbox\container\element\size.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\element\size.obj%20src\tbox\container\element\size.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container\element
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\element\size.obj src\tbox\container\element\size.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\element\str.obj: src\tbox\container\element\str.c
	@echo compiling.release src\tbox\container\element\str.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\element\str.obj%20src\tbox\container\element\str.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container\element
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\element\str.obj src\tbox\container\element\str.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\element\true.obj: src\tbox\container\element\true.c
	@echo compiling.release src\tbox\container\element\true.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\element\true.obj%20src\tbox\container\element\true.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container\element
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\element\true.obj src\tbox\container\element\true.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\element\uint16.obj: src\tbox\container\element\uint16.c
	@echo compiling.release src\tbox\container\element\uint16.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\element\uint16.obj%20src\tbox\container\element\uint16.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container\element
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\element\uint16.obj src\tbox\container\element\uint16.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\element\uint32.obj: src\tbox\container\element\uint32.c
	@echo compiling.release src\tbox\container\element\uint32.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\element\uint32.obj%20src\tbox\container\element\uint32.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container\element
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\element\uint32.obj src\tbox\container\element\uint32.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\element\uint8.obj: src\tbox\container\element\uint8.c
	@echo compiling.release src\tbox\container\element\uint8.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\element\uint8.obj%20src\tbox\container\element\uint8.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container\element
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\element\uint8.obj src\tbox\container\element\uint8.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\hash_map.obj: src\tbox\container\hash_map.c
	@echo compiling.release src\tbox\container\hash_map.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\hash_map.obj%20src\tbox\container\hash_map.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\hash_map.obj src\tbox\container\hash_map.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\hash_set.obj: src\tbox\container\hash_set.c
	@echo compiling.release src\tbox\container\hash_set.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\hash_set.obj%20src\tbox\container\hash_set.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\hash_set.obj src\tbox\container\hash_set.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\heap.obj: src\tbox\container\heap.c
	@echo compiling.release src\tbox\container\heap.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\heap.obj%20src\tbox\container\heap.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\heap.obj src\tbox\container\heap.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\iterator\long.obj: src\tbox\container\iterator\long.c
	@echo compiling.release src\tbox\container\iterator\long.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\iterator\long.obj%20src\tbox\container\iterator\long.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container\iterator
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\iterator\long.obj src\tbox\container\iterator\long.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\iterator\mem.obj: src\tbox\container\iterator\mem.c
	@echo compiling.release src\tbox\container\iterator\mem.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\iterator\mem.obj%20src\tbox\container\iterator\mem.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container\iterator
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\iterator\mem.obj src\tbox\container\iterator\mem.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\iterator\ptr.obj: src\tbox\container\iterator\ptr.c
	@echo compiling.release src\tbox\container\iterator\ptr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\iterator\ptr.obj%20src\tbox\container\iterator\ptr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container\iterator
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\iterator\ptr.obj src\tbox\container\iterator\ptr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\iterator\size.obj: src\tbox\container\iterator\size.c
	@echo compiling.release src\tbox\container\iterator\size.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\iterator\size.obj%20src\tbox\container\iterator\size.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container\iterator
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\iterator\size.obj src\tbox\container\iterator\size.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\iterator\str.obj: src\tbox\container\iterator\str.c
	@echo compiling.release src\tbox\container\iterator\str.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\iterator\str.obj%20src\tbox\container\iterator\str.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container\iterator
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\iterator\str.obj src\tbox\container\iterator\str.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\iterator.obj: src\tbox\container\iterator.c
	@echo compiling.release src\tbox\container\iterator.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\iterator.obj%20src\tbox\container\iterator.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\iterator.obj src\tbox\container\iterator.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\list.obj: src\tbox\container\list.c
	@echo compiling.release src\tbox\container\list.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\list.obj%20src\tbox\container\list.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\list.obj src\tbox\container\list.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\list_entry.obj: src\tbox\container\list_entry.c
	@echo compiling.release src\tbox\container\list_entry.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\list_entry.obj%20src\tbox\container\list_entry.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\list_entry.obj src\tbox\container\list_entry.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\priority_queue.obj: src\tbox\container\priority_queue.c
	@echo compiling.release src\tbox\container\priority_queue.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\priority_queue.obj%20src\tbox\container\priority_queue.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\priority_queue.obj src\tbox\container\priority_queue.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\queue.obj: src\tbox\container\queue.c
	@echo compiling.release src\tbox\container\queue.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\queue.obj%20src\tbox\container\queue.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\queue.obj src\tbox\container\queue.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\single_list.obj: src\tbox\container\single_list.c
	@echo compiling.release src\tbox\container\single_list.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\single_list.obj%20src\tbox\container\single_list.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\single_list.obj src\tbox\container\single_list.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\single_list_entry.obj: src\tbox\container\single_list_entry.c
	@echo compiling.release src\tbox\container\single_list_entry.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\single_list_entry.obj%20src\tbox\container\single_list_entry.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\single_list_entry.obj src\tbox\container\single_list_entry.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\stack.obj: src\tbox\container\stack.c
	@echo compiling.release src\tbox\container\stack.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\stack.obj%20src\tbox\container\stack.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\stack.obj src\tbox\container\stack.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\container\vector.obj: src\tbox\container\vector.c
	@echo compiling.release src\tbox\container\vector.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\container\vector.obj%20src\tbox\container\vector.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\container
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\container\vector.obj src\tbox\container\vector.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\libm.obj: src\tbox\libm\libm.c
	@echo compiling.release src\tbox\libm\libm.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\libm.obj%20src\tbox\libm\libm.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\libm.obj src\tbox\libm\libm.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\idivi8.obj: src\tbox\libm\idivi8.c
	@echo compiling.release src\tbox\libm\idivi8.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\idivi8.obj%20src\tbox\libm\idivi8.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\idivi8.obj src\tbox\libm\idivi8.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\ilog2i.obj: src\tbox\libm\ilog2i.c
	@echo compiling.release src\tbox\libm\ilog2i.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\ilog2i.obj%20src\tbox\libm\ilog2i.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\ilog2i.obj src\tbox\libm\ilog2i.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\isqrti.obj: src\tbox\libm\isqrti.c
	@echo compiling.release src\tbox\libm\isqrti.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\isqrti.obj%20src\tbox\libm\isqrti.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\isqrti.obj src\tbox\libm\isqrti.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\isqrti64.obj: src\tbox\libm\isqrti64.c
	@echo compiling.release src\tbox\libm\isqrti64.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\isqrti64.obj%20src\tbox\libm\isqrti64.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\isqrti64.obj src\tbox\libm\isqrti64.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\atomic64.obj: src\tbox\platform\atomic64.c
	@echo compiling.release src\tbox\platform\atomic64.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\atomic64.obj%20src\tbox\platform\atomic64.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\atomic64.obj src\tbox\platform\atomic64.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\backtrace.obj: src\tbox\platform\backtrace.c
	@echo compiling.release src\tbox\platform\backtrace.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\backtrace.obj%20src\tbox\platform\backtrace.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\backtrace.obj src\tbox\platform\backtrace.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\cache_time.obj: src\tbox\platform\cache_time.c
	@echo compiling.release src\tbox\platform\cache_time.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\cache_time.obj%20src\tbox\platform\cache_time.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\cache_time.obj src\tbox\platform\cache_time.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\directory.obj: src\tbox\platform\directory.c
	@echo compiling.release src\tbox\platform\directory.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\directory.obj%20src\tbox\platform\directory.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\directory.obj src\tbox\platform\directory.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\dynamic.obj: src\tbox\platform\dynamic.c
	@echo compiling.release src\tbox\platform\dynamic.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\dynamic.obj%20src\tbox\platform\dynamic.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\dynamic.obj src\tbox\platform\dynamic.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\environment.obj: src\tbox\platform\environment.c
	@echo compiling.release src\tbox\platform\environment.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\environment.obj%20src\tbox\platform\environment.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\environment.obj src\tbox\platform\environment.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\file.obj: src\tbox\platform\file.c
	@echo compiling.release src\tbox\platform\file.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\file.obj%20src\tbox\platform\file.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\file.obj src\tbox\platform\file.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\hostname.obj: src\tbox\platform\hostname.c
	@echo compiling.release src\tbox\platform\hostname.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\hostname.obj%20src\tbox\platform\hostname.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\hostname.obj src\tbox\platform\hostname.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\ifaddrs.obj: src\tbox\platform\ifaddrs.c
	@echo compiling.release src\tbox\platform\ifaddrs.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\ifaddrs.obj%20src\tbox\platform\ifaddrs.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\ifaddrs.obj src\tbox\platform\ifaddrs.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\memory.obj: src\tbox\platform\memory.c
	@echo compiling.release src\tbox\platform\memory.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\memory.obj%20src\tbox\platform\memory.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\memory.obj src\tbox\platform\memory.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\page.obj: src\tbox\platform\page.c
	@echo compiling.release src\tbox\platform\page.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\page.obj%20src\tbox\platform\page.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\page.obj src\tbox\platform\page.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\path.obj: src\tbox\platform\path.c
	@echo compiling.release src\tbox\platform\path.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\path.obj%20src\tbox\platform\path.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\path.obj src\tbox\platform\path.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\platform.obj: src\tbox\platform\platform.c
	@echo compiling.release src\tbox\platform\platform.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\platform.obj%20src\tbox\platform\platform.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\platform.obj src\tbox\platform\platform.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\print.obj: src\tbox\platform\print.c
	@echo compiling.release src\tbox\platform\print.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\print.obj%20src\tbox\platform\print.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\print.obj src\tbox\platform\print.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\process.obj: src\tbox\platform\process.c
	@echo compiling.release src\tbox\platform\process.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\process.obj%20src\tbox\platform\process.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\process.obj src\tbox\platform\process.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\processor.obj: src\tbox\platform\processor.c
	@echo compiling.release src\tbox\platform\processor.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\processor.obj%20src\tbox\platform\processor.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\processor.obj src\tbox\platform\processor.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\sched.obj: src\tbox\platform\sched.c
	@echo compiling.release src\tbox\platform\sched.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\sched.obj%20src\tbox\platform\sched.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\sched.obj src\tbox\platform\sched.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\time.obj: src\tbox\platform\time.c
	@echo compiling.release src\tbox\platform\time.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\time.obj%20src\tbox\platform\time.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\time.obj src\tbox\platform\time.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\acos.obj: src\tbox\libm\acos.c
	@echo compiling.release src\tbox\libm\acos.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\acos.obj%20src\tbox\libm\acos.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\acos.obj src\tbox\libm\acos.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\acosf.obj: src\tbox\libm\acosf.c
	@echo compiling.release src\tbox\libm\acosf.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\acosf.obj%20src\tbox\libm\acosf.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\acosf.obj src\tbox\libm\acosf.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\asin.obj: src\tbox\libm\asin.c
	@echo compiling.release src\tbox\libm\asin.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\asin.obj%20src\tbox\libm\asin.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\asin.obj src\tbox\libm\asin.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\asinf.obj: src\tbox\libm\asinf.c
	@echo compiling.release src\tbox\libm\asinf.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\asinf.obj%20src\tbox\libm\asinf.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\asinf.obj src\tbox\libm\asinf.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\atan.obj: src\tbox\libm\atan.c
	@echo compiling.release src\tbox\libm\atan.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\atan.obj%20src\tbox\libm\atan.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\atan.obj src\tbox\libm\atan.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\atan2.obj: src\tbox\libm\atan2.c
	@echo compiling.release src\tbox\libm\atan2.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\atan2.obj%20src\tbox\libm\atan2.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\atan2.obj src\tbox\libm\atan2.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\atan2f.obj: src\tbox\libm\atan2f.c
	@echo compiling.release src\tbox\libm\atan2f.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\atan2f.obj%20src\tbox\libm\atan2f.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\atan2f.obj src\tbox\libm\atan2f.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\atanf.obj: src\tbox\libm\atanf.c
	@echo compiling.release src\tbox\libm\atanf.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\atanf.obj%20src\tbox\libm\atanf.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\atanf.obj src\tbox\libm\atanf.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\cos.obj: src\tbox\libm\cos.c
	@echo compiling.release src\tbox\libm\cos.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\cos.obj%20src\tbox\libm\cos.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\cos.obj src\tbox\libm\cos.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\cosf.obj: src\tbox\libm\cosf.c
	@echo compiling.release src\tbox\libm\cosf.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\cosf.obj%20src\tbox\libm\cosf.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\cosf.obj src\tbox\libm\cosf.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\exp.obj: src\tbox\libm\exp.c
	@echo compiling.release src\tbox\libm\exp.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\exp.obj%20src\tbox\libm\exp.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\exp.obj src\tbox\libm\exp.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\exp1.obj: src\tbox\libm\exp1.c
	@echo compiling.release src\tbox\libm\exp1.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\exp1.obj%20src\tbox\libm\exp1.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\exp1.obj src\tbox\libm\exp1.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\exp1f.obj: src\tbox\libm\exp1f.c
	@echo compiling.release src\tbox\libm\exp1f.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\exp1f.obj%20src\tbox\libm\exp1f.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\exp1f.obj src\tbox\libm\exp1f.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\expf.obj: src\tbox\libm\expf.c
	@echo compiling.release src\tbox\libm\expf.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\expf.obj%20src\tbox\libm\expf.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\expf.obj src\tbox\libm\expf.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\expi.obj: src\tbox\libm\expi.c
	@echo compiling.release src\tbox\libm\expi.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\expi.obj%20src\tbox\libm\expi.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\expi.obj src\tbox\libm\expi.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\expif.obj: src\tbox\libm\expif.c
	@echo compiling.release src\tbox\libm\expif.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\expif.obj%20src\tbox\libm\expif.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\expif.obj src\tbox\libm\expif.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\fmod.obj: src\tbox\libm\fmod.c
	@echo compiling.release src\tbox\libm\fmod.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\fmod.obj%20src\tbox\libm\fmod.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\fmod.obj src\tbox\libm\fmod.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\fmodf.obj: src\tbox\libm\fmodf.c
	@echo compiling.release src\tbox\libm\fmodf.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\fmodf.obj%20src\tbox\libm\fmodf.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\fmodf.obj src\tbox\libm\fmodf.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\isfin.obj: src\tbox\libm\isfin.c
	@echo compiling.release src\tbox\libm\isfin.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\isfin.obj%20src\tbox\libm\isfin.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\isfin.obj src\tbox\libm\isfin.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\isfinf.obj: src\tbox\libm\isfinf.c
	@echo compiling.release src\tbox\libm\isfinf.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\isfinf.obj%20src\tbox\libm\isfinf.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\isfinf.obj src\tbox\libm\isfinf.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\isinf.obj: src\tbox\libm\isinf.c
	@echo compiling.release src\tbox\libm\isinf.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\isinf.obj%20src\tbox\libm\isinf.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\isinf.obj src\tbox\libm\isinf.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\isinff.obj: src\tbox\libm\isinff.c
	@echo compiling.release src\tbox\libm\isinff.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\isinff.obj%20src\tbox\libm\isinff.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\isinff.obj src\tbox\libm\isinff.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\isnan.obj: src\tbox\libm\isnan.c
	@echo compiling.release src\tbox\libm\isnan.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\isnan.obj%20src\tbox\libm\isnan.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\isnan.obj src\tbox\libm\isnan.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\isnanf.obj: src\tbox\libm\isnanf.c
	@echo compiling.release src\tbox\libm\isnanf.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\isnanf.obj%20src\tbox\libm\isnanf.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\isnanf.obj src\tbox\libm\isnanf.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\log2.obj: src\tbox\libm\log2.c
	@echo compiling.release src\tbox\libm\log2.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\log2.obj%20src\tbox\libm\log2.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\log2.obj src\tbox\libm\log2.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\log2f.obj: src\tbox\libm\log2f.c
	@echo compiling.release src\tbox\libm\log2f.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\log2f.obj%20src\tbox\libm\log2f.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\log2f.obj src\tbox\libm\log2f.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\pow.obj: src\tbox\libm\pow.c
	@echo compiling.release src\tbox\libm\pow.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\pow.obj%20src\tbox\libm\pow.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\pow.obj src\tbox\libm\pow.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\powf.obj: src\tbox\libm\powf.c
	@echo compiling.release src\tbox\libm\powf.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\powf.obj%20src\tbox\libm\powf.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\powf.obj src\tbox\libm\powf.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\sin.obj: src\tbox\libm\sin.c
	@echo compiling.release src\tbox\libm\sin.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\sin.obj%20src\tbox\libm\sin.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\sin.obj src\tbox\libm\sin.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\sincos.obj: src\tbox\libm\sincos.c
	@echo compiling.release src\tbox\libm\sincos.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\sincos.obj%20src\tbox\libm\sincos.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\sincos.obj src\tbox\libm\sincos.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\sincosf.obj: src\tbox\libm\sincosf.c
	@echo compiling.release src\tbox\libm\sincosf.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\sincosf.obj%20src\tbox\libm\sincosf.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\sincosf.obj src\tbox\libm\sincosf.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\sinf.obj: src\tbox\libm\sinf.c
	@echo compiling.release src\tbox\libm\sinf.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\sinf.obj%20src\tbox\libm\sinf.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\sinf.obj src\tbox\libm\sinf.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\sqrt.obj: src\tbox\libm\sqrt.c
	@echo compiling.release src\tbox\libm\sqrt.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\sqrt.obj%20src\tbox\libm\sqrt.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\sqrt.obj src\tbox\libm\sqrt.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\sqrtf.obj: src\tbox\libm\sqrtf.c
	@echo compiling.release src\tbox\libm\sqrtf.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\sqrtf.obj%20src\tbox\libm\sqrtf.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\sqrtf.obj src\tbox\libm\sqrtf.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\tan.obj: src\tbox\libm\tan.c
	@echo compiling.release src\tbox\libm\tan.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\tan.obj%20src\tbox\libm\tan.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\tan.obj src\tbox\libm\tan.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\libm\tanf.obj: src\tbox\libm\tanf.c
	@echo compiling.release src\tbox\libm\tanf.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\libm\tanf.obj%20src\tbox\libm\tanf.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\libm\tanf.obj src\tbox\libm\tanf.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\xml\node.obj: src\tbox\xml\node.c
	@echo compiling.release src\tbox\xml\node.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\xml\node.obj%20src\tbox\xml\node.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\xml
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\xml\node.obj src\tbox\xml\node.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\xml\reader.obj: src\tbox\xml\reader.c
	@echo compiling.release src\tbox\xml\reader.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\xml\reader.obj%20src\tbox\xml\reader.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\xml
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\xml\reader.obj src\tbox\xml\reader.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\xml\writer.obj: src\tbox\xml\writer.c
	@echo compiling.release src\tbox\xml\writer.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\xml\writer.obj%20src\tbox\xml\writer.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\xml
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\xml\writer.obj src\tbox\xml\writer.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\regex\regex.obj: src\tbox\regex\regex.c
	@echo compiling.release src\tbox\regex\regex.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\regex\regex.obj%20src\tbox\regex\regex.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\regex
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\regex\regex.obj src\tbox\regex\regex.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\asio\aioo.obj: src\tbox\asio\aioo.c
	@echo compiling.release src\tbox\asio\aioo.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\asio\aioo.obj%20src\tbox\asio\aioo.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\asio
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\asio\aioo.obj src\tbox\asio\aioo.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\asio\aiop.obj: src\tbox\asio\aiop.c
	@echo compiling.release src\tbox\asio\aiop.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\asio\aiop.obj%20src\tbox\asio\aiop.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\asio
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\asio\aiop.obj src\tbox\asio\aiop.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\dns.obj: src\tbox\platform\dns.c
	@echo compiling.release src\tbox\platform\dns.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\dns.obj%20src\tbox\platform\dns.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\dns.obj src\tbox\platform\dns.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\aioo.obj: src\tbox\platform\aioo.c
	@echo compiling.release src\tbox\platform\aioo.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\aioo.obj%20src\tbox\platform\aioo.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\aioo.obj src\tbox\platform\aioo.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\aiop.obj: src\tbox\platform\aiop.c
	@echo compiling.release src\tbox\platform\aiop.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\aiop.obj%20src\tbox\platform\aiop.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\aiop.obj src\tbox\platform\aiop.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\socket.obj: src\tbox\platform\socket.c
	@echo compiling.release src\tbox\platform\socket.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\socket.obj%20src\tbox\platform\socket.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\socket.obj src\tbox\platform\socket.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\stream\impl\stream\http.obj: src\tbox\stream\impl\stream\http.c
	@echo compiling.release src\tbox\stream\impl\stream\http.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\stream\impl\stream\http.obj%20src\tbox\stream\impl\stream\http.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\stream\impl\stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\stream\impl\stream\http.obj src\tbox\stream\impl\stream\http.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\stream\impl\stream\sock.obj: src\tbox\stream\impl\stream\sock.c
	@echo compiling.release src\tbox\stream\impl\stream\sock.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\stream\impl\stream\sock.obj%20src\tbox\stream\impl\stream\sock.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\stream\impl\stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\stream\impl\stream\sock.obj src\tbox\stream\impl\stream\sock.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\stream\impl\filter\chunked.obj: src\tbox\stream\impl\filter\chunked.c
	@echo compiling.release src\tbox\stream\impl\filter\chunked.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\stream\impl\filter\chunked.obj%20src\tbox\stream\impl\filter\chunked.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\stream\impl\filter
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\stream\impl\filter\chunked.obj src\tbox\stream\impl\filter\chunked.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\network\cookies.obj: src\tbox\network\cookies.c
	@echo compiling.release src\tbox\network\cookies.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\network\cookies.obj%20src\tbox\network\cookies.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\network
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\network\cookies.obj src\tbox\network\cookies.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\network\dns\cache.obj: src\tbox\network\dns\cache.c
	@echo compiling.release src\tbox\network\dns\cache.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\network\dns\cache.obj%20src\tbox\network\dns\cache.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\network\dns
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\network\dns\cache.obj src\tbox\network\dns\cache.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\network\dns\looker.obj: src\tbox\network\dns\looker.c
	@echo compiling.release src\tbox\network\dns\looker.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\network\dns\looker.obj%20src\tbox\network\dns\looker.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\network\dns
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\network\dns\looker.obj src\tbox\network\dns\looker.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\network\dns\server.obj: src\tbox\network\dns\server.c
	@echo compiling.release src\tbox\network\dns\server.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\network\dns\server.obj%20src\tbox\network\dns\server.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\network\dns
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\network\dns\server.obj src\tbox\network\dns\server.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\network\http.obj: src\tbox\network\http.c
	@echo compiling.release src\tbox\network\http.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\network\http.obj%20src\tbox\network\http.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\network
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\network\http.obj src\tbox\network\http.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\network\hwaddr.obj: src\tbox\network\hwaddr.c
	@echo compiling.release src\tbox\network\hwaddr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\network\hwaddr.obj%20src\tbox\network\hwaddr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\network
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\network\hwaddr.obj src\tbox\network\hwaddr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\network\impl\http\date.obj: src\tbox\network\impl\http\date.c
	@echo compiling.release src\tbox\network\impl\http\date.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\network\impl\http\date.obj%20src\tbox\network\impl\http\date.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\network\impl\http
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\network\impl\http\date.obj src\tbox\network\impl\http\date.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\network\impl\http\method.obj: src\tbox\network\impl\http\method.c
	@echo compiling.release src\tbox\network\impl\http\method.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\network\impl\http\method.obj%20src\tbox\network\impl\http\method.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\network\impl\http
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\network\impl\http\method.obj src\tbox\network\impl\http\method.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\network\impl\http\option.obj: src\tbox\network\impl\http\option.c
	@echo compiling.release src\tbox\network\impl\http\option.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\network\impl\http\option.obj%20src\tbox\network\impl\http\option.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\network\impl\http
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\network\impl\http\option.obj src\tbox\network\impl\http\option.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\network\impl\http\status.obj: src\tbox\network\impl\http\status.c
	@echo compiling.release src\tbox\network\impl\http\status.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\network\impl\http\status.obj%20src\tbox\network\impl\http\status.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\network\impl\http
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\network\impl\http\status.obj src\tbox\network\impl\http\status.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\network\ipaddr.obj: src\tbox\network\ipaddr.c
	@echo compiling.release src\tbox\network\ipaddr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\network\ipaddr.obj%20src\tbox\network\ipaddr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\network
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\network\ipaddr.obj src\tbox\network\ipaddr.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\network\ipv4.obj: src\tbox\network\ipv4.c
	@echo compiling.release src\tbox\network\ipv4.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\network\ipv4.obj%20src\tbox\network\ipv4.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\network
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\network\ipv4.obj src\tbox\network\ipv4.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\network\ipv6.obj: src\tbox\network\ipv6.c
	@echo compiling.release src\tbox\network\ipv6.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\network\ipv6.obj%20src\tbox\network\ipv6.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\network
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\network\ipv6.obj src\tbox\network\ipv6.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\network\network.obj: src\tbox\network\network.c
	@echo compiling.release src\tbox\network\network.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\network\network.obj%20src\tbox\network\network.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\network
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\network\network.obj src\tbox\network\network.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\network\url.obj: src\tbox\network\url.c
	@echo compiling.release src\tbox\network\url.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\network\url.obj%20src\tbox\network\url.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\network
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\network\url.obj src\tbox\network\url.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\asio\aico.obj: src\tbox\asio\aico.c
	@echo compiling.release src\tbox\asio\aico.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\asio\aico.obj%20src\tbox\asio\aico.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\asio
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\asio\aico.obj src\tbox\asio\aico.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\asio\aicp.obj: src\tbox\asio\aicp.c
	@echo compiling.release src\tbox\asio\aicp.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\asio\aicp.obj%20src\tbox\asio\aicp.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\asio
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\asio\aicp.obj src\tbox\asio\aicp.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\asio\http.obj: src\tbox\asio\http.c
	@echo compiling.release src\tbox\asio\http.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\asio\http.obj%20src\tbox\asio\http.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\asio
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\asio\http.obj src\tbox\asio\http.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\asio\dns.obj: src\tbox\asio\dns.c
	@echo compiling.release src\tbox\asio\dns.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\asio\dns.obj%20src\tbox\asio\dns.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\asio
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\asio\dns.obj src\tbox\asio\dns.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\stream\async_stream.obj: src\tbox\stream\async_stream.c
	@echo compiling.release src\tbox\stream\async_stream.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\stream\async_stream.obj%20src\tbox\stream\async_stream.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\stream\async_stream.obj src\tbox\stream\async_stream.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\stream\async_transfer.obj: src\tbox\stream\async_transfer.c
	@echo compiling.release src\tbox\stream\async_transfer.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\stream\async_transfer.obj%20src\tbox\stream\async_transfer.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\stream\async_transfer.obj src\tbox\stream\async_transfer.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\stream\impl\async_stream\data.obj: src\tbox\stream\impl\async_stream\data.c
	@echo compiling.release src\tbox\stream\impl\async_stream\data.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\stream\impl\async_stream\data.obj%20src\tbox\stream\impl\async_stream\data.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\stream\impl\async_stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\stream\impl\async_stream\data.obj src\tbox\stream\impl\async_stream\data.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\stream\impl\async_stream\file.obj: src\tbox\stream\impl\async_stream\file.c
	@echo compiling.release src\tbox\stream\impl\async_stream\file.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\stream\impl\async_stream\file.obj%20src\tbox\stream\impl\async_stream\file.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\stream\impl\async_stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\stream\impl\async_stream\file.obj src\tbox\stream\impl\async_stream\file.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\stream\impl\async_stream\filter.obj: src\tbox\stream\impl\async_stream\filter.c
	@echo compiling.release src\tbox\stream\impl\async_stream\filter.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\stream\impl\async_stream\filter.obj%20src\tbox\stream\impl\async_stream\filter.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\stream\impl\async_stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\stream\impl\async_stream\filter.obj src\tbox\stream\impl\async_stream\filter.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\stream\impl\async_stream\http.obj: src\tbox\stream\impl\async_stream\http.c
	@echo compiling.release src\tbox\stream\impl\async_stream\http.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\stream\impl\async_stream\http.obj%20src\tbox\stream\impl\async_stream\http.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\stream\impl\async_stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\stream\impl\async_stream\http.obj src\tbox\stream\impl\async_stream\http.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\stream\impl\async_stream\prefix.obj: src\tbox\stream\impl\async_stream\prefix.c
	@echo compiling.release src\tbox\stream\impl\async_stream\prefix.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\stream\impl\async_stream\prefix.obj%20src\tbox\stream\impl\async_stream\prefix.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\stream\impl\async_stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\stream\impl\async_stream\prefix.obj src\tbox\stream\impl\async_stream\prefix.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\stream\impl\async_stream\sock.obj: src\tbox\stream\impl\async_stream\sock.c
	@echo compiling.release src\tbox\stream\impl\async_stream\sock.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\stream\impl\async_stream\sock.obj%20src\tbox\stream\impl\async_stream\sock.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\stream\impl\async_stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\stream\impl\async_stream\sock.obj src\tbox\stream\impl\async_stream\sock.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\stream\transfer_pool.obj: src\tbox\stream\transfer_pool.c
	@echo compiling.release src\tbox\stream\transfer_pool.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\stream\transfer_pool.obj%20src\tbox\stream\transfer_pool.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\stream\transfer_pool.obj src\tbox\stream\transfer_pool.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\aicp.obj: src\tbox\platform\aicp.c
	@echo compiling.release src\tbox\platform\aicp.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\aicp.obj%20src\tbox\platform\aicp.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\aicp.obj src\tbox\platform\aicp.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\thread.obj: src\tbox\platform\thread.c
	@echo compiling.release src\tbox\platform\thread.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\thread.obj%20src\tbox\platform\thread.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\thread.obj src\tbox\platform\thread.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\thread_pool.obj: src\tbox\platform\thread_pool.c
	@echo compiling.release src\tbox\platform\thread_pool.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\thread_pool.obj%20src\tbox\platform\thread_pool.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\thread_pool.obj src\tbox\platform\thread_pool.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\thread_store.obj: src\tbox\platform\thread_store.c
	@echo compiling.release src\tbox\platform\thread_store.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\thread_store.obj%20src\tbox\platform\thread_store.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\thread_store.obj src\tbox\platform\thread_store.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\event.obj: src\tbox\platform\event.c
	@echo compiling.release src\tbox\platform\event.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\event.obj%20src\tbox\platform\event.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\event.obj src\tbox\platform\event.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\mutex.obj: src\tbox\platform\mutex.c
	@echo compiling.release src\tbox\platform\mutex.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\mutex.obj%20src\tbox\platform\mutex.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\mutex.obj src\tbox\platform\mutex.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\semaphore.obj: src\tbox\platform\semaphore.c
	@echo compiling.release src\tbox\platform\semaphore.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\semaphore.obj%20src\tbox\platform\semaphore.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\semaphore.obj src\tbox\platform\semaphore.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\timer.obj: src\tbox\platform\timer.c
	@echo compiling.release src\tbox\platform\timer.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\timer.obj%20src\tbox\platform\timer.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\timer.obj src\tbox\platform\timer.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\ltimer.obj: src\tbox\platform\ltimer.c
	@echo compiling.release src\tbox\platform\ltimer.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\ltimer.obj%20src\tbox\platform\ltimer.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\ltimer.obj src\tbox\platform\ltimer.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\object\array.obj: src\tbox\object\array.c
	@echo compiling.release src\tbox\object\array.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\object\array.obj%20src\tbox\object\array.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\object
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\object\array.obj src\tbox\object\array.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\object\boolean.obj: src\tbox\object\boolean.c
	@echo compiling.release src\tbox\object\boolean.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\object\boolean.obj%20src\tbox\object\boolean.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\object
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\object\boolean.obj src\tbox\object\boolean.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\object\data.obj: src\tbox\object\data.c
	@echo compiling.release src\tbox\object\data.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\object\data.obj%20src\tbox\object\data.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\object
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\object\data.obj src\tbox\object\data.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\object\date.obj: src\tbox\object\date.c
	@echo compiling.release src\tbox\object\date.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\object\date.obj%20src\tbox\object\date.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\object
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\object\date.obj src\tbox\object\date.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\object\dictionary.obj: src\tbox\object\dictionary.c
	@echo compiling.release src\tbox\object\dictionary.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\object\dictionary.obj%20src\tbox\object\dictionary.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\object
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\object\dictionary.obj src\tbox\object\dictionary.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\object\impl\reader\bin.obj: src\tbox\object\impl\reader\bin.c
	@echo compiling.release src\tbox\object\impl\reader\bin.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\object\impl\reader\bin.obj%20src\tbox\object\impl\reader\bin.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\object\impl\reader
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\object\impl\reader\bin.obj src\tbox\object\impl\reader\bin.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\object\impl\reader\bplist.obj: src\tbox\object\impl\reader\bplist.c
	@echo compiling.release src\tbox\object\impl\reader\bplist.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\object\impl\reader\bplist.obj%20src\tbox\object\impl\reader\bplist.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\object\impl\reader
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\object\impl\reader\bplist.obj src\tbox\object\impl\reader\bplist.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\object\impl\reader\json.obj: src\tbox\object\impl\reader\json.c
	@echo compiling.release src\tbox\object\impl\reader\json.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\object\impl\reader\json.obj%20src\tbox\object\impl\reader\json.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\object\impl\reader
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\object\impl\reader\json.obj src\tbox\object\impl\reader\json.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\object\impl\reader\reader.obj: src\tbox\object\impl\reader\reader.c
	@echo compiling.release src\tbox\object\impl\reader\reader.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\object\impl\reader\reader.obj%20src\tbox\object\impl\reader\reader.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\object\impl\reader
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\object\impl\reader\reader.obj src\tbox\object\impl\reader\reader.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\object\impl\writer\bin.obj: src\tbox\object\impl\writer\bin.c
	@echo compiling.release src\tbox\object\impl\writer\bin.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\object\impl\writer\bin.obj%20src\tbox\object\impl\writer\bin.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\object\impl\writer
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\object\impl\writer\bin.obj src\tbox\object\impl\writer\bin.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\object\impl\writer\bplist.obj: src\tbox\object\impl\writer\bplist.c
	@echo compiling.release src\tbox\object\impl\writer\bplist.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\object\impl\writer\bplist.obj%20src\tbox\object\impl\writer\bplist.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\object\impl\writer
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\object\impl\writer\bplist.obj src\tbox\object\impl\writer\bplist.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\object\impl\writer\json.obj: src\tbox\object\impl\writer\json.c
	@echo compiling.release src\tbox\object\impl\writer\json.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\object\impl\writer\json.obj%20src\tbox\object\impl\writer\json.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\object\impl\writer
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\object\impl\writer\json.obj src\tbox\object\impl\writer\json.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\object\impl\writer\writer.obj: src\tbox\object\impl\writer\writer.c
	@echo compiling.release src\tbox\object\impl\writer\writer.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\object\impl\writer\writer.obj%20src\tbox\object\impl\writer\writer.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\object\impl\writer
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\object\impl\writer\writer.obj src\tbox\object\impl\writer\writer.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\object\null.obj: src\tbox\object\null.c
	@echo compiling.release src\tbox\object\null.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\object\null.obj%20src\tbox\object\null.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\object
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\object\null.obj src\tbox\object\null.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\object\number.obj: src\tbox\object\number.c
	@echo compiling.release src\tbox\object\number.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\object\number.obj%20src\tbox\object\number.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\object
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\object\number.obj src\tbox\object\number.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\object\object.obj: src\tbox\object\object.c
	@echo compiling.release src\tbox\object\object.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\object\object.obj%20src\tbox\object\object.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\object
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\object\object.obj src\tbox\object\object.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\object\string.obj: src\tbox\object\string.c
	@echo compiling.release src\tbox\object\string.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\object\string.obj%20src\tbox\object\string.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\object
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\object\string.obj src\tbox\object\string.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\utils\option.obj: src\tbox\utils\option.c
	@echo compiling.release src\tbox\utils\option.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\utils\option.obj%20src\tbox\utils\option.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\utils
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\utils\option.obj src\tbox\utils\option.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\object\impl\reader\xml.obj: src\tbox\object\impl\reader\xml.c
	@echo compiling.release src\tbox\object\impl\reader\xml.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\object\impl\reader\xml.obj%20src\tbox\object\impl\reader\xml.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\object\impl\reader
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\object\impl\reader\xml.obj src\tbox\object\impl\reader\xml.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\object\impl\reader\xplist.obj: src\tbox\object\impl\reader\xplist.c
	@echo compiling.release src\tbox\object\impl\reader\xplist.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\object\impl\reader\xplist.obj%20src\tbox\object\impl\reader\xplist.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\object\impl\reader
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\object\impl\reader\xplist.obj src\tbox\object\impl\reader\xplist.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\object\impl\writer\xml.obj: src\tbox\object\impl\writer\xml.c
	@echo compiling.release src\tbox\object\impl\writer\xml.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\object\impl\writer\xml.obj%20src\tbox\object\impl\writer\xml.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\object\impl\writer
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\object\impl\writer\xml.obj src\tbox\object\impl\writer\xml.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\object\impl\writer\xplist.obj: src\tbox\object\impl\writer\xplist.c
	@echo compiling.release src\tbox\object\impl\writer\xplist.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\object\impl\writer\xplist.obj%20src\tbox\object\impl\writer\xplist.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\object\impl\writer
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\object\impl\writer\xplist.obj src\tbox\object\impl\writer\xplist.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\charset\ascii.obj: src\tbox\charset\ascii.c
	@echo compiling.release src\tbox\charset\ascii.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\charset\ascii.obj%20src\tbox\charset\ascii.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\charset
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\charset\ascii.obj src\tbox\charset\ascii.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\charset\charset.obj: src\tbox\charset\charset.c
	@echo compiling.release src\tbox\charset\charset.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\charset\charset.obj%20src\tbox\charset\charset.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\charset
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\charset\charset.obj src\tbox\charset\charset.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\charset\gb2312.obj: src\tbox\charset\gb2312.c
	@echo compiling.release src\tbox\charset\gb2312.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\charset\gb2312.obj%20src\tbox\charset\gb2312.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\charset
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\charset\gb2312.obj src\tbox\charset\gb2312.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\charset\iso8859.obj: src\tbox\charset\iso8859.c
	@echo compiling.release src\tbox\charset\iso8859.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\charset\iso8859.obj%20src\tbox\charset\iso8859.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\charset
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\charset\iso8859.obj src\tbox\charset\iso8859.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\charset\ucs2.obj: src\tbox\charset\ucs2.c
	@echo compiling.release src\tbox\charset\ucs2.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\charset\ucs2.obj%20src\tbox\charset\ucs2.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\charset
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\charset\ucs2.obj src\tbox\charset\ucs2.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\charset\ucs4.obj: src\tbox\charset\ucs4.c
	@echo compiling.release src\tbox\charset\ucs4.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\charset\ucs4.obj%20src\tbox\charset\ucs4.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\charset
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\charset\ucs4.obj src\tbox\charset\ucs4.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\charset\utf16.obj: src\tbox\charset\utf16.c
	@echo compiling.release src\tbox\charset\utf16.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\charset\utf16.obj%20src\tbox\charset\utf16.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\charset
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\charset\utf16.obj src\tbox\charset\utf16.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\charset\utf32.obj: src\tbox\charset\utf32.c
	@echo compiling.release src\tbox\charset\utf32.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\charset\utf32.obj%20src\tbox\charset\utf32.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\charset
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\charset\utf32.obj src\tbox\charset\utf32.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\charset\utf8.obj: src\tbox\charset\utf8.c
	@echo compiling.release src\tbox\charset\utf8.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\charset\utf8.obj%20src\tbox\charset\utf8.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\charset
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\charset\utf8.obj src\tbox\charset\utf8.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\stream\impl\filter\charset.obj: src\tbox\stream\impl\filter\charset.c
	@echo compiling.release src\tbox\stream\impl\filter\charset.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\stream\impl\filter\charset.obj%20src\tbox\stream\impl\filter\charset.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\stream\impl\filter
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\stream\impl\filter\charset.obj src\tbox\stream\impl\filter\charset.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\zip\zip.obj: src\tbox\zip\zip.c
	@echo compiling.release src\tbox\zip\zip.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\zip\zip.obj%20src\tbox\zip\zip.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\zip
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\zip\zip.obj src\tbox\zip\zip.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\stream\impl\filter\zip.obj: src\tbox\stream\impl\filter\zip.c
	@echo compiling.release src\tbox\stream\impl\filter\zip.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\stream\impl\filter\zip.obj%20src\tbox\stream\impl\filter\zip.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\stream\impl\filter
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\stream\impl\filter\zip.obj src\tbox\stream\impl\filter\zip.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\database\sql.obj: src\tbox\database\sql.c
	@echo compiling.release src\tbox\database\sql.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\database\sql.obj%20src\tbox\database\sql.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\database
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\database\sql.obj src\tbox\database\sql.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\database\value.obj: src\tbox\database\value.c
	@echo compiling.release src\tbox\database\value.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\database\value.obj%20src\tbox\database\value.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\database
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\database\value.obj src\tbox\database\value.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\windows\socket_pool.obj: src\tbox\platform\windows\socket_pool.c
	@echo compiling.release src\tbox\platform\windows\socket_pool.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\windows\socket_pool.obj%20src\tbox\platform\windows\socket_pool.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform\windows
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\windows\socket_pool.obj src\tbox\platform\windows\socket_pool.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\windows\interface\dbghelp.obj: src\tbox\platform\windows\interface\dbghelp.c
	@echo compiling.release src\tbox\platform\windows\interface\dbghelp.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\windows\interface\dbghelp.obj%20src\tbox\platform\windows\interface\dbghelp.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform\windows\interface
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\windows\interface\dbghelp.obj src\tbox\platform\windows\interface\dbghelp.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\windows\interface\interface.obj: src\tbox\platform\windows\interface\interface.c
	@echo compiling.release src\tbox\platform\windows\interface\interface.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\windows\interface\interface.obj%20src\tbox\platform\windows\interface\interface.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform\windows\interface
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\windows\interface\interface.obj src\tbox\platform\windows\interface\interface.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\windows\interface\iphlpapi.obj: src\tbox\platform\windows\interface\iphlpapi.c
	@echo compiling.release src\tbox\platform\windows\interface\iphlpapi.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\windows\interface\iphlpapi.obj%20src\tbox\platform\windows\interface\iphlpapi.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform\windows\interface
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\windows\interface\iphlpapi.obj src\tbox\platform\windows\interface\iphlpapi.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\windows\interface\kernel32.obj: src\tbox\platform\windows\interface\kernel32.c
	@echo compiling.release src\tbox\platform\windows\interface\kernel32.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\windows\interface\kernel32.obj%20src\tbox\platform\windows\interface\kernel32.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform\windows\interface
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\windows\interface\kernel32.obj src\tbox\platform\windows\interface\kernel32.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\windows\interface\mswsock.obj: src\tbox\platform\windows\interface\mswsock.c
	@echo compiling.release src\tbox\platform\windows\interface\mswsock.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\windows\interface\mswsock.obj%20src\tbox\platform\windows\interface\mswsock.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform\windows\interface
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\windows\interface\mswsock.obj src\tbox\platform\windows\interface\mswsock.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\windows\interface\shell32.obj: src\tbox\platform\windows\interface\shell32.c
	@echo compiling.release src\tbox\platform\windows\interface\shell32.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\windows\interface\shell32.obj%20src\tbox\platform\windows\interface\shell32.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform\windows\interface
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\windows\interface\shell32.obj src\tbox\platform\windows\interface\shell32.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\windows\interface\user32.obj: src\tbox\platform\windows\interface\user32.c
	@echo compiling.release src\tbox\platform\windows\interface\user32.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\windows\interface\user32.obj%20src\tbox\platform\windows\interface\user32.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform\windows\interface
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\windows\interface\user32.obj src\tbox\platform\windows\interface\user32.c > build\.build.log 2>&1

build\.objs\tbox\src\tbox\platform\windows\interface\ws2_32.obj: src\tbox\platform\windows\interface\ws2_32.c
	@echo compiling.release src\tbox\platform\windows\interface\ws2_32.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22tbox\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\tbox\src\tbox\platform\windows\interface\ws2_32.obj%20src\tbox\platform\windows\interface\ws2_32.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\tbox\src\tbox\platform\windows\interface
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"tbox\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\tbox\src\tbox\platform\windows\interface\ws2_32.obj src\tbox\platform\windows\interface\ws2_32.c > build\.build.log 2>&1

demo: build/demo.exe
build/demo.exe: build/tbox.lib build\.objs\demo\src\demo\demo.obj build\.objs\demo\src\demo\libc\stdlib.obj build\.objs\demo\src\demo\libc\string.obj build\.objs\demo\src\demo\libc\time.obj build\.objs\demo\src\demo\libc\wchar.obj build\.objs\demo\src\demo\libm\integer.obj build\.objs\demo\src\demo\math\random.obj build\.objs\demo\src\demo\utils\adler32.obj build\.objs\demo\src\demo\utils\base32.obj build\.objs\demo\src\demo\utils\base64.obj build\.objs\demo\src\demo\utils\bits.obj build\.objs\demo\src\demo\utils\crc.obj build\.objs\demo\src\demo\utils\dump.obj build\.objs\demo\src\demo\utils\fnv32.obj build\.objs\demo\src\demo\utils\md5.obj build\.objs\demo\src\demo\utils\sha.obj build\.objs\demo\src\demo\utils\url.obj build\.objs\demo\src\demo\other\test.obj build\.objs\demo\src\demo\string\static_string.obj build\.objs\demo\src\demo\string\string.obj build\.objs\demo\src\demo\memory\buffer.obj build\.objs\demo\src\demo\memory\check.obj build\.objs\demo\src\demo\memory\default_allocator.obj build\.objs\demo\src\demo\memory\fixed_pool.obj build\.objs\demo\src\demo\memory\impl\static_fixed_pool.obj build\.objs\demo\src\demo\memory\large_pool.obj build\.objs\demo\src\demo\memory\memops.obj build\.objs\demo\src\demo\memory\queue_buffer.obj build\.objs\demo\src\demo\memory\small_allocator.obj build\.objs\demo\src\demo\memory\static_buffer.obj build\.objs\demo\src\demo\memory\string_pool.obj build\.objs\demo\src\demo\platform\atomic.obj build\.objs\demo\src\demo\platform\atomic64.obj build\.objs\demo\src\demo\platform\backtrace.obj build\.objs\demo\src\demo\platform\barrier.obj build\.objs\demo\src\demo\platform\cache_time.obj build\.objs\demo\src\demo\platform\directory.obj build\.objs\demo\src\demo\platform\environment.obj build\.objs\demo\src\demo\platform\file.obj build\.objs\demo\src\demo\platform\hostname.obj build\.objs\demo\src\demo\platform\ifaddrs.obj build\.objs\demo\src\demo\platform\path.obj build\.objs\demo\src\demo\platform\process.obj build\.objs\demo\src\demo\platform\processor.obj build\.objs\demo\src\demo\platform\utils.obj build\.objs\demo\src\demo\container\bloom_filter.obj build\.objs\demo\src\demo\container\circle_queue.obj build\.objs\demo\src\demo\container\hash_map.obj build\.objs\demo\src\demo\container\hash_set.obj build\.objs\demo\src\demo\container\heap.obj build\.objs\demo\src\demo\container\list.obj build\.objs\demo\src\demo\container\list_entry.obj build\.objs\demo\src\demo\container\queue.obj build\.objs\demo\src\demo\container\single_list.obj build\.objs\demo\src\demo\container\single_list_entry.obj build\.objs\demo\src\demo\container\stack.obj build\.objs\demo\src\demo\container\vector.obj build\.objs\demo\src\demo\algorithm\find.obj build\.objs\demo\src\demo\algorithm\sort.obj build\.objs\demo\src\demo\stream\stream.obj build\.objs\demo\src\demo\stream\stream\cache.obj build\.objs\demo\src\demo\stream\stream\charset.obj build\.objs\demo\src\demo\stream\stream\null.obj build\.objs\demo\src\demo\stream\stream\zip.obj build\.objs\demo\src\demo\math\fixed.obj build\.objs\demo\src\demo\libm\float.obj build\.objs\demo\src\demo\libm\double.obj build\.objs\demo\src\demo\platform\thread_pool.obj build\.objs\demo\src\demo\platform\thread_store.obj build\.objs\demo\src\demo\platform\event.obj build\.objs\demo\src\demo\platform\lock.obj build\.objs\demo\src\demo\platform\timer.obj build\.objs\demo\src\demo\platform\ltimer.obj build\.objs\demo\src\demo\platform\exception.obj build\.objs\demo\src\demo\platform\semaphore.obj build\.objs\demo\src\demo\xml\document.obj build\.objs\demo\src\demo\xml\reader.obj build\.objs\demo\src\demo\xml\writer.obj build\.objs\demo\src\demo\regex\regex.obj build\.objs\demo\src\demo\network\cookies.obj build\.objs\demo\src\demo\network\dns.obj build\.objs\demo\src\demo\network\http.obj build\.objs\demo\src\demo\network\hwaddr.obj build\.objs\demo\src\demo\network\impl\date.obj build\.objs\demo\src\demo\network\ipaddr.obj build\.objs\demo\src\demo\network\ipv4.obj build\.objs\demo\src\demo\network\ipv6.obj build\.objs\demo\src\demo\network\spider.obj build\.objs\demo\src\demo\network\url.obj build\.objs\demo\src\demo\network\whois.obj build\.objs\demo\src\demo\asio\aicpc.obj build\.objs\demo\src\demo\asio\aicpd.obj build\.objs\demo\src\demo\asio\aiopc.obj build\.objs\demo\src\demo\asio\aiopd.obj build\.objs\demo\src\demo\asio\dns.obj build\.objs\demo\src\demo\asio\http.obj build\.objs\demo\src\demo\asio\httpd.obj build\.objs\demo\src\demo\stream\async_stream.obj build\.objs\demo\src\demo\stream\transfer_pool.obj build\.objs\demo\src\demo\stream\async_transfer.obj build\.objs\demo\src\demo\stream\async_stream\cache.obj build\.objs\demo\src\demo\stream\async_stream\charset.obj build\.objs\demo\src\demo\stream\async_stream\null.obj build\.objs\demo\src\demo\stream\async_stream\zip.obj build\.objs\demo\src\demo\utils\option.obj build\.objs\demo\src\demo\object\bin.obj build\.objs\demo\src\demo\object\bplist.obj build\.objs\demo\src\demo\object\dump.obj build\.objs\demo\src\demo\object\jcat.obj build\.objs\demo\src\demo\object\json.obj build\.objs\demo\src\demo\object\xml.obj build\.objs\demo\src\demo\object\xplist.obj build\.objs\demo\src\demo\other\charset.obj build\.objs\demo\src\demo\database\sql.obj
	@echo linking.release demo.exe
	@xmake l $(VERBOSE) verbose "link.exe%20-nodefaultlib:%22msvcrt.lib%22%20-libpath:build%20tbox.lib%20-libpath:pkg\pcre2.pkg\lib\windows\x86%20pcre2-8.lib%20ws2_32.lib%20%20-nologo%20-dynamicbase%20-nxcompat%20-machine:x86%20-out:build/demo.exe%20*.obj"
	@xmake l mkdir build
	@link.exe > build\.build.log 2>&1 @<<
-nodefaultlib:"msvcrt.lib" -libpath:build tbox.lib -libpath:pkg\pcre2.pkg\lib\windows\x86 pcre2-8.lib ws2_32.lib  -nologo -dynamicbase -nxcompat -machine:x86 -out:build/demo.exe build\.objs\demo\src\demo\demo.obj build\.objs\demo\src\demo\libc\stdlib.obj build\.objs\demo\src\demo\libc\string.obj build\.objs\demo\src\demo\libc\time.obj build\.objs\demo\src\demo\libc\wchar.obj build\.objs\demo\src\demo\libm\integer.obj build\.objs\demo\src\demo\math\random.obj build\.objs\demo\src\demo\utils\adler32.obj build\.objs\demo\src\demo\utils\base32.obj build\.objs\demo\src\demo\utils\base64.obj build\.objs\demo\src\demo\utils\bits.obj build\.objs\demo\src\demo\utils\crc.obj build\.objs\demo\src\demo\utils\dump.obj build\.objs\demo\src\demo\utils\fnv32.obj build\.objs\demo\src\demo\utils\md5.obj build\.objs\demo\src\demo\utils\sha.obj build\.objs\demo\src\demo\utils\url.obj build\.objs\demo\src\demo\other\test.obj build\.objs\demo\src\demo\string\static_string.obj build\.objs\demo\src\demo\string\string.obj build\.objs\demo\src\demo\memory\buffer.obj build\.objs\demo\src\demo\memory\check.obj build\.objs\demo\src\demo\memory\default_allocator.obj build\.objs\demo\src\demo\memory\fixed_pool.obj build\.objs\demo\src\demo\memory\impl\static_fixed_pool.obj build\.objs\demo\src\demo\memory\large_pool.obj build\.objs\demo\src\demo\memory\memops.obj build\.objs\demo\src\demo\memory\queue_buffer.obj build\.objs\demo\src\demo\memory\small_allocator.obj build\.objs\demo\src\demo\memory\static_buffer.obj build\.objs\demo\src\demo\memory\string_pool.obj build\.objs\demo\src\demo\platform\atomic.obj build\.objs\demo\src\demo\platform\atomic64.obj build\.objs\demo\src\demo\platform\backtrace.obj build\.objs\demo\src\demo\platform\barrier.obj build\.objs\demo\src\demo\platform\cache_time.obj build\.objs\demo\src\demo\platform\directory.obj build\.objs\demo\src\demo\platform\environment.obj build\.objs\demo\src\demo\platform\file.obj build\.objs\demo\src\demo\platform\hostname.obj build\.objs\demo\src\demo\platform\ifaddrs.obj build\.objs\demo\src\demo\platform\path.obj build\.objs\demo\src\demo\platform\process.obj build\.objs\demo\src\demo\platform\processor.obj build\.objs\demo\src\demo\platform\utils.obj build\.objs\demo\src\demo\container\bloom_filter.obj build\.objs\demo\src\demo\container\circle_queue.obj build\.objs\demo\src\demo\container\hash_map.obj build\.objs\demo\src\demo\container\hash_set.obj build\.objs\demo\src\demo\container\heap.obj build\.objs\demo\src\demo\container\list.obj build\.objs\demo\src\demo\container\list_entry.obj build\.objs\demo\src\demo\container\queue.obj build\.objs\demo\src\demo\container\single_list.obj build\.objs\demo\src\demo\container\single_list_entry.obj build\.objs\demo\src\demo\container\stack.obj build\.objs\demo\src\demo\container\vector.obj build\.objs\demo\src\demo\algorithm\find.obj build\.objs\demo\src\demo\algorithm\sort.obj build\.objs\demo\src\demo\stream\stream.obj build\.objs\demo\src\demo\stream\stream\cache.obj build\.objs\demo\src\demo\stream\stream\charset.obj build\.objs\demo\src\demo\stream\stream\null.obj build\.objs\demo\src\demo\stream\stream\zip.obj build\.objs\demo\src\demo\math\fixed.obj build\.objs\demo\src\demo\libm\float.obj build\.objs\demo\src\demo\libm\double.obj build\.objs\demo\src\demo\platform\thread_pool.obj build\.objs\demo\src\demo\platform\thread_store.obj build\.objs\demo\src\demo\platform\event.obj build\.objs\demo\src\demo\platform\lock.obj build\.objs\demo\src\demo\platform\timer.obj build\.objs\demo\src\demo\platform\ltimer.obj build\.objs\demo\src\demo\platform\exception.obj build\.objs\demo\src\demo\platform\semaphore.obj build\.objs\demo\src\demo\xml\document.obj build\.objs\demo\src\demo\xml\reader.obj build\.objs\demo\src\demo\xml\writer.obj build\.objs\demo\src\demo\regex\regex.obj build\.objs\demo\src\demo\network\cookies.obj build\.objs\demo\src\demo\network\dns.obj build\.objs\demo\src\demo\network\http.obj build\.objs\demo\src\demo\network\hwaddr.obj build\.objs\demo\src\demo\network\impl\date.obj build\.objs\demo\src\demo\network\ipaddr.obj build\.objs\demo\src\demo\network\ipv4.obj build\.objs\demo\src\demo\network\ipv6.obj build\.objs\demo\src\demo\network\spider.obj build\.objs\demo\src\demo\network\url.obj build\.objs\demo\src\demo\network\whois.obj build\.objs\demo\src\demo\asio\aicpc.obj build\.objs\demo\src\demo\asio\aicpd.obj build\.objs\demo\src\demo\asio\aiopc.obj build\.objs\demo\src\demo\asio\aiopd.obj build\.objs\demo\src\demo\asio\dns.obj build\.objs\demo\src\demo\asio\http.obj build\.objs\demo\src\demo\asio\httpd.obj build\.objs\demo\src\demo\stream\async_stream.obj build\.objs\demo\src\demo\stream\transfer_pool.obj build\.objs\demo\src\demo\stream\async_transfer.obj build\.objs\demo\src\demo\stream\async_stream\cache.obj build\.objs\demo\src\demo\stream\async_stream\charset.obj build\.objs\demo\src\demo\stream\async_stream\null.obj build\.objs\demo\src\demo\stream\async_stream\zip.obj build\.objs\demo\src\demo\utils\option.obj build\.objs\demo\src\demo\object\bin.obj build\.objs\demo\src\demo\object\bplist.obj build\.objs\demo\src\demo\object\dump.obj build\.objs\demo\src\demo\object\jcat.obj build\.objs\demo\src\demo\object\json.obj build\.objs\demo\src\demo\object\xml.obj build\.objs\demo\src\demo\object\xplist.obj build\.objs\demo\src\demo\other\charset.obj build\.objs\demo\src\demo\database\sql.obj
<<

build\.objs\demo\src\demo\demo.obj: src\demo\demo.c
	@echo compiling.release src\demo\demo.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\demo.obj%20src\demo\demo.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\demo.obj src\demo\demo.c > build\.build.log 2>&1

build\.objs\demo\src\demo\libc\stdlib.obj: src\demo\libc\stdlib.c
	@echo compiling.release src\demo\libc\stdlib.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\libc\stdlib.obj%20src\demo\libc\stdlib.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\libc
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\libc\stdlib.obj src\demo\libc\stdlib.c > build\.build.log 2>&1

build\.objs\demo\src\demo\libc\string.obj: src\demo\libc\string.c
	@echo compiling.release src\demo\libc\string.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\libc\string.obj%20src\demo\libc\string.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\libc
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\libc\string.obj src\demo\libc\string.c > build\.build.log 2>&1

build\.objs\demo\src\demo\libc\time.obj: src\demo\libc\time.c
	@echo compiling.release src\demo\libc\time.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\libc\time.obj%20src\demo\libc\time.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\libc
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\libc\time.obj src\demo\libc\time.c > build\.build.log 2>&1

build\.objs\demo\src\demo\libc\wchar.obj: src\demo\libc\wchar.c
	@echo compiling.release src\demo\libc\wchar.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\libc\wchar.obj%20src\demo\libc\wchar.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\libc
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\libc\wchar.obj src\demo\libc\wchar.c > build\.build.log 2>&1

build\.objs\demo\src\demo\libm\integer.obj: src\demo\libm\integer.c
	@echo compiling.release src\demo\libm\integer.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\libm\integer.obj%20src\demo\libm\integer.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\libm\integer.obj src\demo\libm\integer.c > build\.build.log 2>&1

build\.objs\demo\src\demo\math\random.obj: src\demo\math\random.c
	@echo compiling.release src\demo\math\random.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\math\random.obj%20src\demo\math\random.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\math
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\math\random.obj src\demo\math\random.c > build\.build.log 2>&1

build\.objs\demo\src\demo\utils\adler32.obj: src\demo\utils\adler32.c
	@echo compiling.release src\demo\utils\adler32.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\utils\adler32.obj%20src\demo\utils\adler32.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\utils
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\utils\adler32.obj src\demo\utils\adler32.c > build\.build.log 2>&1

build\.objs\demo\src\demo\utils\base32.obj: src\demo\utils\base32.c
	@echo compiling.release src\demo\utils\base32.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\utils\base32.obj%20src\demo\utils\base32.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\utils
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\utils\base32.obj src\demo\utils\base32.c > build\.build.log 2>&1

build\.objs\demo\src\demo\utils\base64.obj: src\demo\utils\base64.c
	@echo compiling.release src\demo\utils\base64.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\utils\base64.obj%20src\demo\utils\base64.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\utils
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\utils\base64.obj src\demo\utils\base64.c > build\.build.log 2>&1

build\.objs\demo\src\demo\utils\bits.obj: src\demo\utils\bits.c
	@echo compiling.release src\demo\utils\bits.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\utils\bits.obj%20src\demo\utils\bits.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\utils
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\utils\bits.obj src\demo\utils\bits.c > build\.build.log 2>&1

build\.objs\demo\src\demo\utils\crc.obj: src\demo\utils\crc.c
	@echo compiling.release src\demo\utils\crc.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\utils\crc.obj%20src\demo\utils\crc.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\utils
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\utils\crc.obj src\demo\utils\crc.c > build\.build.log 2>&1

build\.objs\demo\src\demo\utils\dump.obj: src\demo\utils\dump.c
	@echo compiling.release src\demo\utils\dump.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\utils\dump.obj%20src\demo\utils\dump.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\utils
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\utils\dump.obj src\demo\utils\dump.c > build\.build.log 2>&1

build\.objs\demo\src\demo\utils\fnv32.obj: src\demo\utils\fnv32.c
	@echo compiling.release src\demo\utils\fnv32.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\utils\fnv32.obj%20src\demo\utils\fnv32.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\utils
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\utils\fnv32.obj src\demo\utils\fnv32.c > build\.build.log 2>&1

build\.objs\demo\src\demo\utils\md5.obj: src\demo\utils\md5.c
	@echo compiling.release src\demo\utils\md5.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\utils\md5.obj%20src\demo\utils\md5.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\utils
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\utils\md5.obj src\demo\utils\md5.c > build\.build.log 2>&1

build\.objs\demo\src\demo\utils\sha.obj: src\demo\utils\sha.c
	@echo compiling.release src\demo\utils\sha.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\utils\sha.obj%20src\demo\utils\sha.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\utils
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\utils\sha.obj src\demo\utils\sha.c > build\.build.log 2>&1

build\.objs\demo\src\demo\utils\url.obj: src\demo\utils\url.c
	@echo compiling.release src\demo\utils\url.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\utils\url.obj%20src\demo\utils\url.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\utils
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\utils\url.obj src\demo\utils\url.c > build\.build.log 2>&1

build\.objs\demo\src\demo\other\test.obj: src\demo\other\test.c
	@echo compiling.release src\demo\other\test.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\other\test.obj%20src\demo\other\test.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\other
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\other\test.obj src\demo\other\test.c > build\.build.log 2>&1

build\.objs\demo\src\demo\string\static_string.obj: src\demo\string\static_string.c
	@echo compiling.release src\demo\string\static_string.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\string\static_string.obj%20src\demo\string\static_string.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\string\static_string.obj src\demo\string\static_string.c > build\.build.log 2>&1

build\.objs\demo\src\demo\string\string.obj: src\demo\string\string.c
	@echo compiling.release src\demo\string\string.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\string\string.obj%20src\demo\string\string.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\string
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\string\string.obj src\demo\string\string.c > build\.build.log 2>&1

build\.objs\demo\src\demo\memory\buffer.obj: src\demo\memory\buffer.c
	@echo compiling.release src\demo\memory\buffer.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\memory\buffer.obj%20src\demo\memory\buffer.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\memory
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\memory\buffer.obj src\demo\memory\buffer.c > build\.build.log 2>&1

build\.objs\demo\src\demo\memory\check.obj: src\demo\memory\check.c
	@echo compiling.release src\demo\memory\check.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\memory\check.obj%20src\demo\memory\check.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\memory
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\memory\check.obj src\demo\memory\check.c > build\.build.log 2>&1

build\.objs\demo\src\demo\memory\default_allocator.obj: src\demo\memory\default_allocator.c
	@echo compiling.release src\demo\memory\default_allocator.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\memory\default_allocator.obj%20src\demo\memory\default_allocator.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\memory
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\memory\default_allocator.obj src\demo\memory\default_allocator.c > build\.build.log 2>&1

build\.objs\demo\src\demo\memory\fixed_pool.obj: src\demo\memory\fixed_pool.c
	@echo compiling.release src\demo\memory\fixed_pool.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\memory\fixed_pool.obj%20src\demo\memory\fixed_pool.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\memory
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\memory\fixed_pool.obj src\demo\memory\fixed_pool.c > build\.build.log 2>&1

build\.objs\demo\src\demo\memory\impl\static_fixed_pool.obj: src\demo\memory\impl\static_fixed_pool.c
	@echo compiling.release src\demo\memory\impl\static_fixed_pool.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\memory\impl\static_fixed_pool.obj%20src\demo\memory\impl\static_fixed_pool.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\memory\impl
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\memory\impl\static_fixed_pool.obj src\demo\memory\impl\static_fixed_pool.c > build\.build.log 2>&1

build\.objs\demo\src\demo\memory\large_pool.obj: src\demo\memory\large_pool.c
	@echo compiling.release src\demo\memory\large_pool.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\memory\large_pool.obj%20src\demo\memory\large_pool.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\memory
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\memory\large_pool.obj src\demo\memory\large_pool.c > build\.build.log 2>&1

build\.objs\demo\src\demo\memory\memops.obj: src\demo\memory\memops.c
	@echo compiling.release src\demo\memory\memops.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\memory\memops.obj%20src\demo\memory\memops.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\memory
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\memory\memops.obj src\demo\memory\memops.c > build\.build.log 2>&1

build\.objs\demo\src\demo\memory\queue_buffer.obj: src\demo\memory\queue_buffer.c
	@echo compiling.release src\demo\memory\queue_buffer.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\memory\queue_buffer.obj%20src\demo\memory\queue_buffer.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\memory
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\memory\queue_buffer.obj src\demo\memory\queue_buffer.c > build\.build.log 2>&1

build\.objs\demo\src\demo\memory\small_allocator.obj: src\demo\memory\small_allocator.c
	@echo compiling.release src\demo\memory\small_allocator.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\memory\small_allocator.obj%20src\demo\memory\small_allocator.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\memory
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\memory\small_allocator.obj src\demo\memory\small_allocator.c > build\.build.log 2>&1

build\.objs\demo\src\demo\memory\static_buffer.obj: src\demo\memory\static_buffer.c
	@echo compiling.release src\demo\memory\static_buffer.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\memory\static_buffer.obj%20src\demo\memory\static_buffer.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\memory
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\memory\static_buffer.obj src\demo\memory\static_buffer.c > build\.build.log 2>&1

build\.objs\demo\src\demo\memory\string_pool.obj: src\demo\memory\string_pool.c
	@echo compiling.release src\demo\memory\string_pool.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\memory\string_pool.obj%20src\demo\memory\string_pool.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\memory
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\memory\string_pool.obj src\demo\memory\string_pool.c > build\.build.log 2>&1

build\.objs\demo\src\demo\platform\atomic.obj: src\demo\platform\atomic.c
	@echo compiling.release src\demo\platform\atomic.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\platform\atomic.obj%20src\demo\platform\atomic.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\platform\atomic.obj src\demo\platform\atomic.c > build\.build.log 2>&1

build\.objs\demo\src\demo\platform\atomic64.obj: src\demo\platform\atomic64.c
	@echo compiling.release src\demo\platform\atomic64.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\platform\atomic64.obj%20src\demo\platform\atomic64.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\platform\atomic64.obj src\demo\platform\atomic64.c > build\.build.log 2>&1

build\.objs\demo\src\demo\platform\backtrace.obj: src\demo\platform\backtrace.c
	@echo compiling.release src\demo\platform\backtrace.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\platform\backtrace.obj%20src\demo\platform\backtrace.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\platform\backtrace.obj src\demo\platform\backtrace.c > build\.build.log 2>&1

build\.objs\demo\src\demo\platform\barrier.obj: src\demo\platform\barrier.c
	@echo compiling.release src\demo\platform\barrier.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\platform\barrier.obj%20src\demo\platform\barrier.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\platform\barrier.obj src\demo\platform\barrier.c > build\.build.log 2>&1

build\.objs\demo\src\demo\platform\cache_time.obj: src\demo\platform\cache_time.c
	@echo compiling.release src\demo\platform\cache_time.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\platform\cache_time.obj%20src\demo\platform\cache_time.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\platform\cache_time.obj src\demo\platform\cache_time.c > build\.build.log 2>&1

build\.objs\demo\src\demo\platform\directory.obj: src\demo\platform\directory.c
	@echo compiling.release src\demo\platform\directory.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\platform\directory.obj%20src\demo\platform\directory.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\platform\directory.obj src\demo\platform\directory.c > build\.build.log 2>&1

build\.objs\demo\src\demo\platform\environment.obj: src\demo\platform\environment.c
	@echo compiling.release src\demo\platform\environment.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\platform\environment.obj%20src\demo\platform\environment.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\platform\environment.obj src\demo\platform\environment.c > build\.build.log 2>&1

build\.objs\demo\src\demo\platform\file.obj: src\demo\platform\file.c
	@echo compiling.release src\demo\platform\file.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\platform\file.obj%20src\demo\platform\file.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\platform\file.obj src\demo\platform\file.c > build\.build.log 2>&1

build\.objs\demo\src\demo\platform\hostname.obj: src\demo\platform\hostname.c
	@echo compiling.release src\demo\platform\hostname.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\platform\hostname.obj%20src\demo\platform\hostname.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\platform\hostname.obj src\demo\platform\hostname.c > build\.build.log 2>&1

build\.objs\demo\src\demo\platform\ifaddrs.obj: src\demo\platform\ifaddrs.c
	@echo compiling.release src\demo\platform\ifaddrs.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\platform\ifaddrs.obj%20src\demo\platform\ifaddrs.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\platform\ifaddrs.obj src\demo\platform\ifaddrs.c > build\.build.log 2>&1

build\.objs\demo\src\demo\platform\path.obj: src\demo\platform\path.c
	@echo compiling.release src\demo\platform\path.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\platform\path.obj%20src\demo\platform\path.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\platform\path.obj src\demo\platform\path.c > build\.build.log 2>&1

build\.objs\demo\src\demo\platform\process.obj: src\demo\platform\process.c
	@echo compiling.release src\demo\platform\process.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\platform\process.obj%20src\demo\platform\process.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\platform\process.obj src\demo\platform\process.c > build\.build.log 2>&1

build\.objs\demo\src\demo\platform\processor.obj: src\demo\platform\processor.c
	@echo compiling.release src\demo\platform\processor.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\platform\processor.obj%20src\demo\platform\processor.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\platform\processor.obj src\demo\platform\processor.c > build\.build.log 2>&1

build\.objs\demo\src\demo\platform\utils.obj: src\demo\platform\utils.c
	@echo compiling.release src\demo\platform\utils.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\platform\utils.obj%20src\demo\platform\utils.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\platform\utils.obj src\demo\platform\utils.c > build\.build.log 2>&1

build\.objs\demo\src\demo\container\bloom_filter.obj: src\demo\container\bloom_filter.c
	@echo compiling.release src\demo\container\bloom_filter.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\container\bloom_filter.obj%20src\demo\container\bloom_filter.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\container
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\container\bloom_filter.obj src\demo\container\bloom_filter.c > build\.build.log 2>&1

build\.objs\demo\src\demo\container\circle_queue.obj: src\demo\container\circle_queue.c
	@echo compiling.release src\demo\container\circle_queue.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\container\circle_queue.obj%20src\demo\container\circle_queue.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\container
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\container\circle_queue.obj src\demo\container\circle_queue.c > build\.build.log 2>&1

build\.objs\demo\src\demo\container\hash_map.obj: src\demo\container\hash_map.c
	@echo compiling.release src\demo\container\hash_map.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\container\hash_map.obj%20src\demo\container\hash_map.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\container
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\container\hash_map.obj src\demo\container\hash_map.c > build\.build.log 2>&1

build\.objs\demo\src\demo\container\hash_set.obj: src\demo\container\hash_set.c
	@echo compiling.release src\demo\container\hash_set.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\container\hash_set.obj%20src\demo\container\hash_set.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\container
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\container\hash_set.obj src\demo\container\hash_set.c > build\.build.log 2>&1

build\.objs\demo\src\demo\container\heap.obj: src\demo\container\heap.c
	@echo compiling.release src\demo\container\heap.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\container\heap.obj%20src\demo\container\heap.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\container
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\container\heap.obj src\demo\container\heap.c > build\.build.log 2>&1

build\.objs\demo\src\demo\container\list.obj: src\demo\container\list.c
	@echo compiling.release src\demo\container\list.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\container\list.obj%20src\demo\container\list.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\container
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\container\list.obj src\demo\container\list.c > build\.build.log 2>&1

build\.objs\demo\src\demo\container\list_entry.obj: src\demo\container\list_entry.c
	@echo compiling.release src\demo\container\list_entry.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\container\list_entry.obj%20src\demo\container\list_entry.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\container
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\container\list_entry.obj src\demo\container\list_entry.c > build\.build.log 2>&1

build\.objs\demo\src\demo\container\queue.obj: src\demo\container\queue.c
	@echo compiling.release src\demo\container\queue.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\container\queue.obj%20src\demo\container\queue.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\container
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\container\queue.obj src\demo\container\queue.c > build\.build.log 2>&1

build\.objs\demo\src\demo\container\single_list.obj: src\demo\container\single_list.c
	@echo compiling.release src\demo\container\single_list.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\container\single_list.obj%20src\demo\container\single_list.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\container
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\container\single_list.obj src\demo\container\single_list.c > build\.build.log 2>&1

build\.objs\demo\src\demo\container\single_list_entry.obj: src\demo\container\single_list_entry.c
	@echo compiling.release src\demo\container\single_list_entry.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\container\single_list_entry.obj%20src\demo\container\single_list_entry.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\container
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\container\single_list_entry.obj src\demo\container\single_list_entry.c > build\.build.log 2>&1

build\.objs\demo\src\demo\container\stack.obj: src\demo\container\stack.c
	@echo compiling.release src\demo\container\stack.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\container\stack.obj%20src\demo\container\stack.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\container
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\container\stack.obj src\demo\container\stack.c > build\.build.log 2>&1

build\.objs\demo\src\demo\container\vector.obj: src\demo\container\vector.c
	@echo compiling.release src\demo\container\vector.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\container\vector.obj%20src\demo\container\vector.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\container
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\container\vector.obj src\demo\container\vector.c > build\.build.log 2>&1

build\.objs\demo\src\demo\algorithm\find.obj: src\demo\algorithm\find.c
	@echo compiling.release src\demo\algorithm\find.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\algorithm\find.obj%20src\demo\algorithm\find.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\algorithm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\algorithm\find.obj src\demo\algorithm\find.c > build\.build.log 2>&1

build\.objs\demo\src\demo\algorithm\sort.obj: src\demo\algorithm\sort.c
	@echo compiling.release src\demo\algorithm\sort.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\algorithm\sort.obj%20src\demo\algorithm\sort.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\algorithm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\algorithm\sort.obj src\demo\algorithm\sort.c > build\.build.log 2>&1

build\.objs\demo\src\demo\stream\stream.obj: src\demo\stream\stream.c
	@echo compiling.release src\demo\stream\stream.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\stream\stream.obj%20src\demo\stream\stream.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\stream\stream.obj src\demo\stream\stream.c > build\.build.log 2>&1

build\.objs\demo\src\demo\stream\stream\cache.obj: src\demo\stream\stream\cache.c
	@echo compiling.release src\demo\stream\stream\cache.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\stream\stream\cache.obj%20src\demo\stream\stream\cache.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\stream\stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\stream\stream\cache.obj src\demo\stream\stream\cache.c > build\.build.log 2>&1

build\.objs\demo\src\demo\stream\stream\charset.obj: src\demo\stream\stream\charset.c
	@echo compiling.release src\demo\stream\stream\charset.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\stream\stream\charset.obj%20src\demo\stream\stream\charset.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\stream\stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\stream\stream\charset.obj src\demo\stream\stream\charset.c > build\.build.log 2>&1

build\.objs\demo\src\demo\stream\stream\null.obj: src\demo\stream\stream\null.c
	@echo compiling.release src\demo\stream\stream\null.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\stream\stream\null.obj%20src\demo\stream\stream\null.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\stream\stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\stream\stream\null.obj src\demo\stream\stream\null.c > build\.build.log 2>&1

build\.objs\demo\src\demo\stream\stream\zip.obj: src\demo\stream\stream\zip.c
	@echo compiling.release src\demo\stream\stream\zip.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\stream\stream\zip.obj%20src\demo\stream\stream\zip.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\stream\stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\stream\stream\zip.obj src\demo\stream\stream\zip.c > build\.build.log 2>&1

build\.objs\demo\src\demo\math\fixed.obj: src\demo\math\fixed.c
	@echo compiling.release src\demo\math\fixed.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\math\fixed.obj%20src\demo\math\fixed.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\math
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\math\fixed.obj src\demo\math\fixed.c > build\.build.log 2>&1

build\.objs\demo\src\demo\libm\float.obj: src\demo\libm\float.c
	@echo compiling.release src\demo\libm\float.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\libm\float.obj%20src\demo\libm\float.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\libm\float.obj src\demo\libm\float.c > build\.build.log 2>&1

build\.objs\demo\src\demo\libm\double.obj: src\demo\libm\double.c
	@echo compiling.release src\demo\libm\double.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\libm\double.obj%20src\demo\libm\double.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\libm
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\libm\double.obj src\demo\libm\double.c > build\.build.log 2>&1

build\.objs\demo\src\demo\platform\thread_pool.obj: src\demo\platform\thread_pool.c
	@echo compiling.release src\demo\platform\thread_pool.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\platform\thread_pool.obj%20src\demo\platform\thread_pool.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\platform\thread_pool.obj src\demo\platform\thread_pool.c > build\.build.log 2>&1

build\.objs\demo\src\demo\platform\thread_store.obj: src\demo\platform\thread_store.c
	@echo compiling.release src\demo\platform\thread_store.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\platform\thread_store.obj%20src\demo\platform\thread_store.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\platform\thread_store.obj src\demo\platform\thread_store.c > build\.build.log 2>&1

build\.objs\demo\src\demo\platform\event.obj: src\demo\platform\event.c
	@echo compiling.release src\demo\platform\event.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\platform\event.obj%20src\demo\platform\event.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\platform\event.obj src\demo\platform\event.c > build\.build.log 2>&1

build\.objs\demo\src\demo\platform\lock.obj: src\demo\platform\lock.c
	@echo compiling.release src\demo\platform\lock.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\platform\lock.obj%20src\demo\platform\lock.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\platform\lock.obj src\demo\platform\lock.c > build\.build.log 2>&1

build\.objs\demo\src\demo\platform\timer.obj: src\demo\platform\timer.c
	@echo compiling.release src\demo\platform\timer.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\platform\timer.obj%20src\demo\platform\timer.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\platform\timer.obj src\demo\platform\timer.c > build\.build.log 2>&1

build\.objs\demo\src\demo\platform\ltimer.obj: src\demo\platform\ltimer.c
	@echo compiling.release src\demo\platform\ltimer.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\platform\ltimer.obj%20src\demo\platform\ltimer.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\platform\ltimer.obj src\demo\platform\ltimer.c > build\.build.log 2>&1

build\.objs\demo\src\demo\platform\exception.obj: src\demo\platform\exception.c
	@echo compiling.release src\demo\platform\exception.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\platform\exception.obj%20src\demo\platform\exception.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\platform\exception.obj src\demo\platform\exception.c > build\.build.log 2>&1

build\.objs\demo\src\demo\platform\semaphore.obj: src\demo\platform\semaphore.c
	@echo compiling.release src\demo\platform\semaphore.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\platform\semaphore.obj%20src\demo\platform\semaphore.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\platform
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\platform\semaphore.obj src\demo\platform\semaphore.c > build\.build.log 2>&1

build\.objs\demo\src\demo\xml\document.obj: src\demo\xml\document.c
	@echo compiling.release src\demo\xml\document.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\xml\document.obj%20src\demo\xml\document.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\xml
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\xml\document.obj src\demo\xml\document.c > build\.build.log 2>&1

build\.objs\demo\src\demo\xml\reader.obj: src\demo\xml\reader.c
	@echo compiling.release src\demo\xml\reader.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\xml\reader.obj%20src\demo\xml\reader.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\xml
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\xml\reader.obj src\demo\xml\reader.c > build\.build.log 2>&1

build\.objs\demo\src\demo\xml\writer.obj: src\demo\xml\writer.c
	@echo compiling.release src\demo\xml\writer.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\xml\writer.obj%20src\demo\xml\writer.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\xml
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\xml\writer.obj src\demo\xml\writer.c > build\.build.log 2>&1

build\.objs\demo\src\demo\regex\regex.obj: src\demo\regex\regex.c
	@echo compiling.release src\demo\regex\regex.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\regex\regex.obj%20src\demo\regex\regex.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\regex
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\regex\regex.obj src\demo\regex\regex.c > build\.build.log 2>&1

build\.objs\demo\src\demo\network\cookies.obj: src\demo\network\cookies.c
	@echo compiling.release src\demo\network\cookies.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\network\cookies.obj%20src\demo\network\cookies.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\network
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\network\cookies.obj src\demo\network\cookies.c > build\.build.log 2>&1

build\.objs\demo\src\demo\network\dns.obj: src\demo\network\dns.c
	@echo compiling.release src\demo\network\dns.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\network\dns.obj%20src\demo\network\dns.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\network
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\network\dns.obj src\demo\network\dns.c > build\.build.log 2>&1

build\.objs\demo\src\demo\network\http.obj: src\demo\network\http.c
	@echo compiling.release src\demo\network\http.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\network\http.obj%20src\demo\network\http.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\network
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\network\http.obj src\demo\network\http.c > build\.build.log 2>&1

build\.objs\demo\src\demo\network\hwaddr.obj: src\demo\network\hwaddr.c
	@echo compiling.release src\demo\network\hwaddr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\network\hwaddr.obj%20src\demo\network\hwaddr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\network
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\network\hwaddr.obj src\demo\network\hwaddr.c > build\.build.log 2>&1

build\.objs\demo\src\demo\network\impl\date.obj: src\demo\network\impl\date.c
	@echo compiling.release src\demo\network\impl\date.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\network\impl\date.obj%20src\demo\network\impl\date.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\network\impl
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\network\impl\date.obj src\demo\network\impl\date.c > build\.build.log 2>&1

build\.objs\demo\src\demo\network\ipaddr.obj: src\demo\network\ipaddr.c
	@echo compiling.release src\demo\network\ipaddr.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\network\ipaddr.obj%20src\demo\network\ipaddr.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\network
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\network\ipaddr.obj src\demo\network\ipaddr.c > build\.build.log 2>&1

build\.objs\demo\src\demo\network\ipv4.obj: src\demo\network\ipv4.c
	@echo compiling.release src\demo\network\ipv4.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\network\ipv4.obj%20src\demo\network\ipv4.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\network
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\network\ipv4.obj src\demo\network\ipv4.c > build\.build.log 2>&1

build\.objs\demo\src\demo\network\ipv6.obj: src\demo\network\ipv6.c
	@echo compiling.release src\demo\network\ipv6.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\network\ipv6.obj%20src\demo\network\ipv6.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\network
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\network\ipv6.obj src\demo\network\ipv6.c > build\.build.log 2>&1

build\.objs\demo\src\demo\network\spider.obj: src\demo\network\spider.c
	@echo compiling.release src\demo\network\spider.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\network\spider.obj%20src\demo\network\spider.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\network
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\network\spider.obj src\demo\network\spider.c > build\.build.log 2>&1

build\.objs\demo\src\demo\network\url.obj: src\demo\network\url.c
	@echo compiling.release src\demo\network\url.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\network\url.obj%20src\demo\network\url.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\network
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\network\url.obj src\demo\network\url.c > build\.build.log 2>&1

build\.objs\demo\src\demo\network\whois.obj: src\demo\network\whois.c
	@echo compiling.release src\demo\network\whois.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\network\whois.obj%20src\demo\network\whois.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\network
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\network\whois.obj src\demo\network\whois.c > build\.build.log 2>&1

build\.objs\demo\src\demo\asio\aicpc.obj: src\demo\asio\aicpc.c
	@echo compiling.release src\demo\asio\aicpc.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\asio\aicpc.obj%20src\demo\asio\aicpc.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\asio
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\asio\aicpc.obj src\demo\asio\aicpc.c > build\.build.log 2>&1

build\.objs\demo\src\demo\asio\aicpd.obj: src\demo\asio\aicpd.c
	@echo compiling.release src\demo\asio\aicpd.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\asio\aicpd.obj%20src\demo\asio\aicpd.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\asio
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\asio\aicpd.obj src\demo\asio\aicpd.c > build\.build.log 2>&1

build\.objs\demo\src\demo\asio\aiopc.obj: src\demo\asio\aiopc.c
	@echo compiling.release src\demo\asio\aiopc.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\asio\aiopc.obj%20src\demo\asio\aiopc.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\asio
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\asio\aiopc.obj src\demo\asio\aiopc.c > build\.build.log 2>&1

build\.objs\demo\src\demo\asio\aiopd.obj: src\demo\asio\aiopd.c
	@echo compiling.release src\demo\asio\aiopd.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\asio\aiopd.obj%20src\demo\asio\aiopd.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\asio
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\asio\aiopd.obj src\demo\asio\aiopd.c > build\.build.log 2>&1

build\.objs\demo\src\demo\asio\dns.obj: src\demo\asio\dns.c
	@echo compiling.release src\demo\asio\dns.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\asio\dns.obj%20src\demo\asio\dns.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\asio
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\asio\dns.obj src\demo\asio\dns.c > build\.build.log 2>&1

build\.objs\demo\src\demo\asio\http.obj: src\demo\asio\http.c
	@echo compiling.release src\demo\asio\http.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\asio\http.obj%20src\demo\asio\http.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\asio
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\asio\http.obj src\demo\asio\http.c > build\.build.log 2>&1

build\.objs\demo\src\demo\asio\httpd.obj: src\demo\asio\httpd.c
	@echo compiling.release src\demo\asio\httpd.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\asio\httpd.obj%20src\demo\asio\httpd.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\asio
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\asio\httpd.obj src\demo\asio\httpd.c > build\.build.log 2>&1

build\.objs\demo\src\demo\stream\async_stream.obj: src\demo\stream\async_stream.c
	@echo compiling.release src\demo\stream\async_stream.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\stream\async_stream.obj%20src\demo\stream\async_stream.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\stream\async_stream.obj src\demo\stream\async_stream.c > build\.build.log 2>&1

build\.objs\demo\src\demo\stream\transfer_pool.obj: src\demo\stream\transfer_pool.c
	@echo compiling.release src\demo\stream\transfer_pool.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\stream\transfer_pool.obj%20src\demo\stream\transfer_pool.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\stream\transfer_pool.obj src\demo\stream\transfer_pool.c > build\.build.log 2>&1

build\.objs\demo\src\demo\stream\async_transfer.obj: src\demo\stream\async_transfer.c
	@echo compiling.release src\demo\stream\async_transfer.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\stream\async_transfer.obj%20src\demo\stream\async_transfer.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\stream\async_transfer.obj src\demo\stream\async_transfer.c > build\.build.log 2>&1

build\.objs\demo\src\demo\stream\async_stream\cache.obj: src\demo\stream\async_stream\cache.c
	@echo compiling.release src\demo\stream\async_stream\cache.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\stream\async_stream\cache.obj%20src\demo\stream\async_stream\cache.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\stream\async_stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\stream\async_stream\cache.obj src\demo\stream\async_stream\cache.c > build\.build.log 2>&1

build\.objs\demo\src\demo\stream\async_stream\charset.obj: src\demo\stream\async_stream\charset.c
	@echo compiling.release src\demo\stream\async_stream\charset.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\stream\async_stream\charset.obj%20src\demo\stream\async_stream\charset.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\stream\async_stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\stream\async_stream\charset.obj src\demo\stream\async_stream\charset.c > build\.build.log 2>&1

build\.objs\demo\src\demo\stream\async_stream\null.obj: src\demo\stream\async_stream\null.c
	@echo compiling.release src\demo\stream\async_stream\null.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\stream\async_stream\null.obj%20src\demo\stream\async_stream\null.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\stream\async_stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\stream\async_stream\null.obj src\demo\stream\async_stream\null.c > build\.build.log 2>&1

build\.objs\demo\src\demo\stream\async_stream\zip.obj: src\demo\stream\async_stream\zip.c
	@echo compiling.release src\demo\stream\async_stream\zip.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\stream\async_stream\zip.obj%20src\demo\stream\async_stream\zip.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\stream\async_stream
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\stream\async_stream\zip.obj src\demo\stream\async_stream\zip.c > build\.build.log 2>&1

build\.objs\demo\src\demo\utils\option.obj: src\demo\utils\option.c
	@echo compiling.release src\demo\utils\option.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\utils\option.obj%20src\demo\utils\option.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\utils
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\utils\option.obj src\demo\utils\option.c > build\.build.log 2>&1

build\.objs\demo\src\demo\object\bin.obj: src\demo\object\bin.c
	@echo compiling.release src\demo\object\bin.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\object\bin.obj%20src\demo\object\bin.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\object
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\object\bin.obj src\demo\object\bin.c > build\.build.log 2>&1

build\.objs\demo\src\demo\object\bplist.obj: src\demo\object\bplist.c
	@echo compiling.release src\demo\object\bplist.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\object\bplist.obj%20src\demo\object\bplist.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\object
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\object\bplist.obj src\demo\object\bplist.c > build\.build.log 2>&1

build\.objs\demo\src\demo\object\dump.obj: src\demo\object\dump.c
	@echo compiling.release src\demo\object\dump.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\object\dump.obj%20src\demo\object\dump.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\object
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\object\dump.obj src\demo\object\dump.c > build\.build.log 2>&1

build\.objs\demo\src\demo\object\jcat.obj: src\demo\object\jcat.c
	@echo compiling.release src\demo\object\jcat.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\object\jcat.obj%20src\demo\object\jcat.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\object
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\object\jcat.obj src\demo\object\jcat.c > build\.build.log 2>&1

build\.objs\demo\src\demo\object\json.obj: src\demo\object\json.c
	@echo compiling.release src\demo\object\json.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\object\json.obj%20src\demo\object\json.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\object
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\object\json.obj src\demo\object\json.c > build\.build.log 2>&1

build\.objs\demo\src\demo\object\xml.obj: src\demo\object\xml.c
	@echo compiling.release src\demo\object\xml.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\object\xml.obj%20src\demo\object\xml.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\object
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\object\xml.obj src\demo\object\xml.c > build\.build.log 2>&1

build\.objs\demo\src\demo\object\xplist.obj: src\demo\object\xplist.c
	@echo compiling.release src\demo\object\xplist.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\object\xplist.obj%20src\demo\object\xplist.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\object
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\object\xplist.obj src\demo\object\xplist.c > build\.build.log 2>&1

build\.objs\demo\src\demo\other\charset.obj: src\demo\other\charset.c
	@echo compiling.release src\demo\other\charset.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\other\charset.obj%20src\demo\other\charset.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\other
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\other\charset.obj src\demo\other\charset.c > build\.build.log 2>&1

build\.objs\demo\src\demo\database\sql.obj: src\demo\database\sql.c
	@echo compiling.release src\demo\database\sql.c
	@xmake l $(VERBOSE) verbose "cl.exe%20-c%20-Oy%20-MT%20-W3%20-WX%20-Ot%20-arch:SSE2%20-arch:SSE3%20-arch:SSSE3%20-arch:MMX%20-TP%20-Ibuild%20-Ibuild/tbox%20-D_GNU_SOURCE%3d1%20-D_REENTRANT%20-D__tb_small__%20-DNOCRYPT%20-DNOGDI%20-D__tb_prefix__%3d\%22demo\%22%20-Ipkg\pcre2.pkg\inc\windows%20-Ipkg\pcre2.pkg\inc%20-DPCRE2_CODE_UNIT_WIDTH%3d8%20-nologo%20-Gd%20-MP4%20-D_MBCS%20-D_CRT_SECURE_NO_WARNINGS%20-Fobuild\.objs\demo\src\demo\database\sql.obj%20src\demo\database\sql.c%20>%20build\.build.log%202>&1"
	@xmake l mkdir build\.objs\demo\src\demo\database
	@cl.exe -c -Oy -MT -W3 -WX -Ot -arch:SSE2 -arch:SSE3 -arch:SSSE3 -arch:MMX -TP -Ibuild -Ibuild/tbox -D_GNU_SOURCE=1 -D_REENTRANT -D__tb_small__ -DNOCRYPT -DNOGDI -D__tb_prefix__=\"demo\" -Ipkg\pcre2.pkg\inc\windows -Ipkg\pcre2.pkg\inc -DPCRE2_CODE_UNIT_WIDTH=8 -nologo -Gd -MP4 -D_MBCS -D_CRT_SECURE_NO_WARNINGS -Fobuild\.objs\demo\src\demo\database\sql.obj src\demo\database\sql.c > build\.build.log 2>&1

