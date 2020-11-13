#pragma once
#include "base/Config.h"

#include "cocos/bindings/jswrapper/SeApi.h"

extern se::Object* __jsb_cc_gfx_DeviceInfo_proto;
extern se::Class* __jsb_cc_gfx_DeviceInfo_class;

bool js_register_cc_gfx_DeviceInfo(se::Object* obj);
bool register_all_gfx(se::Object* obj);

extern se::Object* __jsb_cc_gfx_ContextInfo_proto;
extern se::Class* __jsb_cc_gfx_ContextInfo_class;

bool js_register_cc_gfx_ContextInfo(se::Object* obj);
bool register_all_gfx(se::Object* obj);

extern se::Object* __jsb_cc_gfx_TextureViewInfo_proto;
extern se::Class* __jsb_cc_gfx_TextureViewInfo_class;

bool js_register_cc_gfx_TextureViewInfo(se::Object* obj);
bool register_all_gfx(se::Object* obj);

extern se::Object* __jsb_cc_gfx_ShaderMacro_proto;
extern se::Class* __jsb_cc_gfx_ShaderMacro_class;

bool js_register_cc_gfx_ShaderMacro(se::Object* obj);
bool register_all_gfx(se::Object* obj);

extern se::Object* __jsb_cc_gfx_Attribute_proto;
extern se::Class* __jsb_cc_gfx_Attribute_class;

bool js_register_cc_gfx_Attribute(se::Object* obj);
bool register_all_gfx(se::Object* obj);

extern se::Object* __jsb_cc_gfx_InputState_proto;
extern se::Class* __jsb_cc_gfx_InputState_class;

bool js_register_cc_gfx_InputState(se::Object* obj);
bool register_all_gfx(se::Object* obj);

extern se::Object* __jsb_cc_gfx_PipelineStateInfo_proto;
extern se::Class* __jsb_cc_gfx_PipelineStateInfo_class;

bool js_register_cc_gfx_PipelineStateInfo(se::Object* obj);
bool register_all_gfx(se::Object* obj);

extern se::Object* __jsb_cc_gfx_FormatInfo_proto;
extern se::Class* __jsb_cc_gfx_FormatInfo_class;

bool js_register_cc_gfx_FormatInfo(se::Object* obj);
bool register_all_gfx(se::Object* obj);

extern se::Object* __jsb_cc_gfx_MemoryStatus_proto;
extern se::Class* __jsb_cc_gfx_MemoryStatus_class;

bool js_register_cc_gfx_MemoryStatus(se::Object* obj);
bool register_all_gfx(se::Object* obj);

extern se::Object* __jsb_cc_gfx_GFXObject_proto;
extern se::Class* __jsb_cc_gfx_GFXObject_class;

bool js_register_cc_gfx_GFXObject(se::Object* obj);
bool register_all_gfx(se::Object* obj);
SE_DECLARE_FUNC(js_gfx_GFXObject_GFXObject);

extern se::Object* __jsb_cc_gfx_Device_proto;
extern se::Class* __jsb_cc_gfx_Device_class;

bool js_register_cc_gfx_Device(se::Object* obj);
bool register_all_gfx(se::Object* obj);
SE_DECLARE_FUNC(js_gfx_Device_hasFeature);
SE_DECLARE_FUNC(js_gfx_Device_createFence);
SE_DECLARE_FUNC(js_gfx_Device_createDescriptorSetLayout);
SE_DECLARE_FUNC(js_gfx_Device_createCommandBuffer);
SE_DECLARE_FUNC(js_gfx_Device_createPipelineState);
SE_DECLARE_FUNC(js_gfx_Device_createDescriptorSet);
SE_DECLARE_FUNC(js_gfx_Device_present);
SE_DECLARE_FUNC(js_gfx_Device_destroy);
SE_DECLARE_FUNC(js_gfx_Device_createFramebuffer);
SE_DECLARE_FUNC(js_gfx_Device_createRenderPass);
SE_DECLARE_FUNC(js_gfx_Device_createPipelineLayout);
SE_DECLARE_FUNC(js_gfx_Device_acquire);
SE_DECLARE_FUNC(js_gfx_Device_createShader);
SE_DECLARE_FUNC(js_gfx_Device_createInputAssembler);
SE_DECLARE_FUNC(js_gfx_Device_defineMacro);
SE_DECLARE_FUNC(js_gfx_Device_createSampler);
SE_DECLARE_FUNC(js_gfx_Device_initialize);
SE_DECLARE_FUNC(js_gfx_Device_resize);
SE_DECLARE_FUNC(js_gfx_Device_genShaderId);
SE_DECLARE_FUNC(js_gfx_Device_createQueue);
SE_DECLARE_FUNC(js_gfx_Device_bindingMappingInfo);
SE_DECLARE_FUNC(js_gfx_Device_getUboOffsetAlignment);

extern se::Object* __jsb_cc_gfx_Buffer_proto;
extern se::Class* __jsb_cc_gfx_Buffer_class;

bool js_register_cc_gfx_Buffer(se::Object* obj);
bool register_all_gfx(se::Object* obj);
SE_DECLARE_FUNC(js_gfx_Buffer_destroy);
SE_DECLARE_FUNC(js_gfx_Buffer_resize);
SE_DECLARE_FUNC(js_gfx_Buffer_Buffer);

extern se::Object* __jsb_cc_gfx_Texture_proto;
extern se::Class* __jsb_cc_gfx_Texture_class;

bool js_register_cc_gfx_Texture(se::Object* obj);
bool register_all_gfx(se::Object* obj);
SE_DECLARE_FUNC(js_gfx_Texture_destroy);
SE_DECLARE_FUNC(js_gfx_Texture_resize);
SE_DECLARE_FUNC(js_gfx_Texture_isTextureView);
SE_DECLARE_FUNC(js_gfx_Texture_Texture);

extern se::Object* __jsb_cc_gfx_Sampler_proto;
extern se::Class* __jsb_cc_gfx_Sampler_class;

bool js_register_cc_gfx_Sampler(se::Object* obj);
bool register_all_gfx(se::Object* obj);
SE_DECLARE_FUNC(js_gfx_Sampler_initialize);
SE_DECLARE_FUNC(js_gfx_Sampler_destroy);
SE_DECLARE_FUNC(js_gfx_Sampler_Sampler);

extern se::Object* __jsb_cc_gfx_Shader_proto;
extern se::Class* __jsb_cc_gfx_Shader_class;

bool js_register_cc_gfx_Shader(se::Object* obj);
bool register_all_gfx(se::Object* obj);
SE_DECLARE_FUNC(js_gfx_Shader_initialize);
SE_DECLARE_FUNC(js_gfx_Shader_destroy);
SE_DECLARE_FUNC(js_gfx_Shader_Shader);

extern se::Object* __jsb_cc_gfx_InputAssembler_proto;
extern se::Class* __jsb_cc_gfx_InputAssembler_class;

bool js_register_cc_gfx_InputAssembler(se::Object* obj);
bool register_all_gfx(se::Object* obj);
SE_DECLARE_FUNC(js_gfx_InputAssembler_destroy);
SE_DECLARE_FUNC(js_gfx_InputAssembler_initialize);
SE_DECLARE_FUNC(js_gfx_InputAssembler_InputAssembler);

extern se::Object* __jsb_cc_gfx_RenderPass_proto;
extern se::Class* __jsb_cc_gfx_RenderPass_class;

bool js_register_cc_gfx_RenderPass(se::Object* obj);
bool register_all_gfx(se::Object* obj);
SE_DECLARE_FUNC(js_gfx_RenderPass_getSubPasses);
SE_DECLARE_FUNC(js_gfx_RenderPass_initialize);
SE_DECLARE_FUNC(js_gfx_RenderPass_destroy);
SE_DECLARE_FUNC(js_gfx_RenderPass_getDepthStencilAttachment);
SE_DECLARE_FUNC(js_gfx_RenderPass_RenderPass);

extern se::Object* __jsb_cc_gfx_Framebuffer_proto;
extern se::Class* __jsb_cc_gfx_Framebuffer_class;

bool js_register_cc_gfx_Framebuffer(se::Object* obj);
bool register_all_gfx(se::Object* obj);
SE_DECLARE_FUNC(js_gfx_Framebuffer_initialize);
SE_DECLARE_FUNC(js_gfx_Framebuffer_destroy);
SE_DECLARE_FUNC(js_gfx_Framebuffer_Framebuffer);

extern se::Object* __jsb_cc_gfx_DescriptorSetLayout_proto;
extern se::Class* __jsb_cc_gfx_DescriptorSetLayout_class;

bool js_register_cc_gfx_DescriptorSetLayout(se::Object* obj);
bool register_all_gfx(se::Object* obj);
SE_DECLARE_FUNC(js_gfx_DescriptorSetLayout_getBindings);
SE_DECLARE_FUNC(js_gfx_DescriptorSetLayout_initialize);
SE_DECLARE_FUNC(js_gfx_DescriptorSetLayout_destroy);
SE_DECLARE_FUNC(js_gfx_DescriptorSetLayout_DescriptorSetLayout);

extern se::Object* __jsb_cc_gfx_PipelineLayout_proto;
extern se::Class* __jsb_cc_gfx_PipelineLayout_class;

bool js_register_cc_gfx_PipelineLayout(se::Object* obj);
bool register_all_gfx(se::Object* obj);
SE_DECLARE_FUNC(js_gfx_PipelineLayout_initialize);
SE_DECLARE_FUNC(js_gfx_PipelineLayout_destroy);
SE_DECLARE_FUNC(js_gfx_PipelineLayout_getSetLayouts);
SE_DECLARE_FUNC(js_gfx_PipelineLayout_PipelineLayout);

extern se::Object* __jsb_cc_gfx_PipelineState_proto;
extern se::Class* __jsb_cc_gfx_PipelineState_class;

bool js_register_cc_gfx_PipelineState(se::Object* obj);
bool register_all_gfx(se::Object* obj);
SE_DECLARE_FUNC(js_gfx_PipelineState_getPipelineLayout);
SE_DECLARE_FUNC(js_gfx_PipelineState_initialize);
SE_DECLARE_FUNC(js_gfx_PipelineState_destroy);
SE_DECLARE_FUNC(js_gfx_PipelineState_getDynamicStates);
SE_DECLARE_FUNC(js_gfx_PipelineState_PipelineState);

extern se::Object* __jsb_cc_gfx_DescriptorSet_proto;
extern se::Class* __jsb_cc_gfx_DescriptorSet_class;

bool js_register_cc_gfx_DescriptorSet(se::Object* obj);
bool register_all_gfx(se::Object* obj);
SE_DECLARE_FUNC(js_gfx_DescriptorSet_bindTextureJSB);
SE_DECLARE_FUNC(js_gfx_DescriptorSet_bindBuffer);
SE_DECLARE_FUNC(js_gfx_DescriptorSet_bindSamplerJSB);
SE_DECLARE_FUNC(js_gfx_DescriptorSet_getTexture);
SE_DECLARE_FUNC(js_gfx_DescriptorSet_bindSampler);
SE_DECLARE_FUNC(js_gfx_DescriptorSet_update);
SE_DECLARE_FUNC(js_gfx_DescriptorSet_getSampler);
SE_DECLARE_FUNC(js_gfx_DescriptorSet_bindTexture);
SE_DECLARE_FUNC(js_gfx_DescriptorSet_initialize);
SE_DECLARE_FUNC(js_gfx_DescriptorSet_destroy);
SE_DECLARE_FUNC(js_gfx_DescriptorSet_getBuffer);
SE_DECLARE_FUNC(js_gfx_DescriptorSet_bindBufferJSB);
SE_DECLARE_FUNC(js_gfx_DescriptorSet_DescriptorSet);

extern se::Object* __jsb_cc_gfx_CommandBuffer_proto;
extern se::Class* __jsb_cc_gfx_CommandBuffer_class;

bool js_register_cc_gfx_CommandBuffer(se::Object* obj);
bool register_all_gfx(se::Object* obj);
SE_DECLARE_FUNC(js_gfx_CommandBuffer_draw);
SE_DECLARE_FUNC(js_gfx_CommandBuffer_setBlendConstants);
SE_DECLARE_FUNC(js_gfx_CommandBuffer_setDepthBound);
SE_DECLARE_FUNC(js_gfx_CommandBuffer_getQueue);
SE_DECLARE_FUNC(js_gfx_CommandBuffer_setLineWidth);
SE_DECLARE_FUNC(js_gfx_CommandBuffer_end);
SE_DECLARE_FUNC(js_gfx_CommandBuffer_setStencilWriteMask);
SE_DECLARE_FUNC(js_gfx_CommandBuffer_getNumInstances);
SE_DECLARE_FUNC(js_gfx_CommandBuffer_setStencilCompareMask);
SE_DECLARE_FUNC(js_gfx_CommandBuffer_bindInputAssembler);
SE_DECLARE_FUNC(js_gfx_CommandBuffer_bindPipelineState);
SE_DECLARE_FUNC(js_gfx_CommandBuffer_destroy);
SE_DECLARE_FUNC(js_gfx_CommandBuffer_getNumTris);
SE_DECLARE_FUNC(js_gfx_CommandBuffer_setViewport);
SE_DECLARE_FUNC(js_gfx_CommandBuffer_setDepthBias);
SE_DECLARE_FUNC(js_gfx_CommandBuffer_begin);
SE_DECLARE_FUNC(js_gfx_CommandBuffer_getType);
SE_DECLARE_FUNC(js_gfx_CommandBuffer_bindDescriptorSet);
SE_DECLARE_FUNC(js_gfx_CommandBuffer_endRenderPass);
SE_DECLARE_FUNC(js_gfx_CommandBuffer_initialize);
SE_DECLARE_FUNC(js_gfx_CommandBuffer_setScissor);
SE_DECLARE_FUNC(js_gfx_CommandBuffer_beginRenderPass);
SE_DECLARE_FUNC(js_gfx_CommandBuffer_getNumDrawCalls);
SE_DECLARE_FUNC(js_gfx_CommandBuffer_CommandBuffer);

extern se::Object* __jsb_cc_gfx_Fence_proto;
extern se::Class* __jsb_cc_gfx_Fence_class;

bool js_register_cc_gfx_Fence(se::Object* obj);
bool register_all_gfx(se::Object* obj);
SE_DECLARE_FUNC(js_gfx_Fence_initialize);
SE_DECLARE_FUNC(js_gfx_Fence_destroy);
SE_DECLARE_FUNC(js_gfx_Fence_wait);
SE_DECLARE_FUNC(js_gfx_Fence_reset);
SE_DECLARE_FUNC(js_gfx_Fence_Fence);

extern se::Object* __jsb_cc_gfx_Queue_proto;
extern se::Class* __jsb_cc_gfx_Queue_class;

bool js_register_cc_gfx_Queue(se::Object* obj);
bool register_all_gfx(se::Object* obj);
SE_DECLARE_FUNC(js_gfx_Queue_submit);
SE_DECLARE_FUNC(js_gfx_Queue_isAsync);
SE_DECLARE_FUNC(js_gfx_Queue_initialize);
SE_DECLARE_FUNC(js_gfx_Queue_destroy);
SE_DECLARE_FUNC(js_gfx_Queue_Queue);

