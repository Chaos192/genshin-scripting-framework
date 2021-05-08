#pragma once

#include <cstdint>
#include <cstddef>

namespace utils
{
	std::uint8_t *aob_scan(void *start, std::size_t size, const char *signature, const char *mask);
}