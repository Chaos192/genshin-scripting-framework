#pragma once

namespace utils
{
	bool hook_nearcall64(void *instruction_address, void *hook_address, void **original_address_out);
}