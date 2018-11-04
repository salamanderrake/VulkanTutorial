#if !defined(VULKANFUNCTIONS_H)
#define VULKANFUNCTIONS_H

#include <vulkan/vulkan.h>
namespace rake {
#define VK_EXPORTED_FUNCTION(fun) extern PFN_##fun fun;
#define VK_GLOBAL_LEVEL_FUNCTION(fun) extern PFN_##fun fun;
#define VK_INSTANCE_LEVEL_FUNCTION(fun) extern PFN_##fun fun;
#define VK_DEVICE_LEVEL_FUNCTION(fun) extern PFN_##fun fun;

#include "VulkanFunctions.inl"

}  // namespace rake
#endif  // VULKANFUNCTIONS_H