#include <stdio.h>
#include <functional>

[[deprecated]]
[[noreturn]]
[[carries_dependency]]
__declspec(nothrow)
__declspec(noreturn)
__declspec(noinline)
__declspec(naked)
extern inline auto __identifier(wmain)
(register const __int32 __identifier(reinterpret_cast) = 123,
const wchar_t* const * const __identifier(nullptr) = nullptr, ...)
noexcept->volatile decltype(std::function<void()>{nullptr})::result_type
{
	puts("hello");
}