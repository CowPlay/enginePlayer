/*
 * EOpenGLFeatures.h
 *
 *  Created on: Oct 25, 2012
 *      Author: gregorytkach
 */

#include "playerCompileConfig.h"

#ifdef VIDEO_DRIVER_OPENGL

#ifndef EOPENGLFEATURES_H_
#define EOPENGLFEATURES_H_

namespace irrgame
{

	namespace video
	{
		static const char* const OpenGLFeatureStrings[] =
		{ "GL_3DFX_multisample", "GL_3DFX_tbuffer",
				"GL_3DFX_texture_compression_FXT1", "GL_AMD_draw_buffers_blend",
				"GL_AMD_performance_monitor", "GL_AMD_texture_texture4",
				"GL_AMD_vertex_shader_tesselator", "GL_APPLE_aux_depth_stencil",
				"GL_APPLE_client_storage", "GL_APPLE_element_array",
				"GL_APPLE_fence", "GL_APPLE_float_pixels",
				"GL_APPLE_flush_buffer_range", "GL_APPLE_object_purgeable",
				"GL_APPLE_rgb_422", "GL_APPLE_row_bytes",
				"GL_APPLE_specular_vector", "GL_APPLE_texture_range",
				"GL_APPLE_transform_hint", "GL_APPLE_vertex_array_object",
				"GL_APPLE_vertex_array_range",
				"GL_APPLE_vertex_program_evaluators", "GL_APPLE_ycbcr_422",
				"GL_ARB_color_buffer_float", "GL_ARB_compatibility",
				"GL_ARB_copy_buffer", "GL_ARB_depth_buffer_float",
				"GL_ARB_depth_clamp", "GL_ARB_depth_texture",
				"GL_ARB_draw_buffers", "GL_ARB_draw_buffers_blend",
				"GL_ARB_draw_elements_base_vertex", "GL_ARB_draw_instanced",
				"GL_ARB_fragment_coord_conventions", "GL_ARB_fragment_program",
				"GL_ARB_fragment_program_shadow", "GL_ARB_fragment_shader",
				"GL_ARB_framebuffer_object", "GL_ARB_framebuffer_sRGB",
				"GL_ARB_geometry_shader4", "GL_ARB_half_float_pixel",
				"GL_ARB_half_float_vertex", "GL_ARB_imaging",
				"GL_ARB_instanced_arrays", "GL_ARB_map_buffer_range",
				"GL_ARB_matrix_palette", "GL_ARB_multisample",
				"GL_ARB_multitexture", "GL_ARB_occlusion_query",
				"GL_ARB_pixel_buffer_object", "GL_ARB_point_parameters",
				"GL_ARB_point_sprite", "GL_ARB_provoking_vertex",
				"GL_ARB_sample_shading", "GL_ARB_seamless_cube_map",
				"GL_ARB_shader_objects", "GL_ARB_shader_texture_lod",
				"GL_ARB_shading_language_100", "GL_ARB_shadow",
				"GL_ARB_shadow_ambient", "GL_ARB_sync",
				"GL_ARB_texture_border_clamp", "GL_ARB_texture_buffer_object",
				"GL_ARB_texture_compression", "GL_ARB_texture_compression_rgtc",
				"GL_ARB_texture_cube_map", "GL_ARB_texture_cube_map_array",
				"GL_ARB_texture_env_add", "GL_ARB_texture_env_combine",
				"GL_ARB_texture_env_crossbar", "GL_ARB_texture_env_dot3",
				"GL_ARB_texture_float", "GL_ARB_texture_gather",
				"GL_ARB_texture_mirrored_repeat", "GL_ARB_texture_multisample",
				"GL_ARB_texture_non_power_of_two", "GL_ARB_texture_query_lod",
				"GL_ARB_texture_rectangle", "GL_ARB_texture_rg",
				"GL_ARB_transpose_matrix", "GL_ARB_uniform_buffer_object",
				"GL_ARB_vertex_array_bgra", "GL_ARB_vertex_array_object",
				"GL_ARB_vertex_blend", "GL_ARB_vertex_buffer_object",
				"GL_ARB_vertex_program", "GL_ARB_vertex_shader",
				"GL_ARB_window_pos", "GL_ATI_draw_buffers",
				"GL_ATI_element_array", "GL_ATI_envmap_bumpmap",
				"GL_ATI_fragment_shader", "GL_ATI_map_object_buffer",
				"GL_ATI_meminfo", "GL_ATI_pixel_format_float",
				"GL_ATI_pn_triangles", "GL_ATI_separate_stencil",
				"GL_ATI_text_fragment_shader", "GL_ATI_texture_env_combine3",
				"GL_ATI_texture_float", "GL_ATI_texture_mirror_once",
				"GL_ATI_vertex_array_object",
				"GL_ATI_vertex_attrib_array_object", "GL_ATI_vertex_streams",
				"GL_EXT_422_pixels", "GL_EXT_abgr", "GL_EXT_bgra",
				"GL_EXT_bindable_uniform", "GL_EXT_blend_color",
				"GL_EXT_blend_equation_separate", "GL_EXT_blend_func_separate",
				"GL_EXT_blend_logic_op", "GL_EXT_blend_minmax",
				"GL_EXT_blend_subtract", "GL_EXT_clip_volume_hint",
				"GL_EXT_cmyka", "GL_EXT_color_subtable",
				"GL_EXT_compiled_vertex_array", "GL_EXT_convolution",
				"GL_EXT_coordinate_frame", "GL_EXT_copy_texture",
				"GL_EXT_cull_vertex", "GL_EXT_depth_bounds_test",
				"GL_EXT_direct_state_access", "GL_EXT_draw_buffers2",
				"GL_EXT_draw_instanced", "GL_EXT_draw_range_elements",
				"GL_EXT_fog_coord", "GL_EXT_framebuffer_blit",
				"GL_EXT_framebuffer_multisample", "GL_EXT_framebuffer_object",
				"GL_EXT_framebuffer_sRGB", "GL_EXT_geometry_shader4",
				"GL_EXT_gpu_program_parameters", "GL_EXT_gpu_shader4",
				"GL_EXT_histogram", "GL_EXT_index_array_formats",
				"GL_EXT_index_func", "GL_EXT_index_material",
				"GL_EXT_index_texture", "GL_EXT_light_texture",
				"GL_EXT_misc_attribute", "GL_EXT_multi_draw_arrays",
				"GL_EXT_multisample", "GL_EXT_packed_depth_stencil",
				"GL_EXT_packed_float", "GL_EXT_packed_pixels",
				"GL_EXT_paletted_texture", "GL_EXT_pixel_buffer_object",
				"GL_EXT_pixel_transform", "GL_EXT_pixel_transform_color_table",
				"GL_EXT_point_parameters", "GL_EXT_polygon_offset",
				"GL_EXT_provoking_vertex", "GL_EXT_rescale_normal",
				"GL_EXT_secondary_color", "GL_EXT_separate_shader_objects",
				"GL_EXT_separate_specular_color", "GL_EXT_shadow_funcs",
				"GL_EXT_shared_texture_palette", "GL_EXT_stencil_clear_tag",
				"GL_EXT_stencil_two_side", "GL_EXT_stencil_wrap",
				"GL_EXT_subtexture", "GL_EXT_texture", "GL_EXT_texture3D",
				"GL_EXT_texture_array", "GL_EXT_texture_buffer_object",
				"GL_EXT_texture_compression_latc",
				"GL_EXT_texture_compression_rgtc",
				"GL_EXT_texture_compression_s3tc", "GL_EXT_texture_cube_map",
				"GL_EXT_texture_env_add", "GL_EXT_texture_env_combine",
				"GL_EXT_texture_env_dot3", "GL_EXT_texture_filter_anisotropic",
				"GL_EXT_texture_integer", "GL_EXT_texture_lod_bias",
				"GL_EXT_texture_mirror_clamp", "GL_EXT_texture_object",
				"GL_EXT_texture_perturb_normal",
				"GL_EXT_texture_shared_exponent", "GL_EXT_texture_snorm",
				"GL_EXT_texture_sRGB", "GL_EXT_texture_swizzle",
				"GL_EXT_timer_query", "GL_EXT_transform_feedback",
				"GL_EXT_vertex_array", "GL_EXT_vertex_array_bgra",
				"GL_EXT_vertex_shader", "GL_EXT_vertex_weighting",
				"GL_FfdMaskSGIX", "GL_GREMEDY_frame_terminator",
				"GL_GREMEDY_string_marker", "GL_HP_convolution_border_modes",
				"GL_HP_image_transform", "GL_HP_occlusion_test",
				"GL_HP_texture_lighting", "GL_IBM_cull_vertex",
				"GL_IBM_multimode_draw_arrays", "GL_IBM_rasterpos_clip",
				"GL_IBM_texture_mirrored_repeat", "GL_IBM_vertex_array_lists",
				"GL_INGR_blend_func_separate", "GL_INGR_color_clamp",
				"GL_INGR_interlace_read", "GL_INGR_palette_buffer",
				"GL_INTEL_parallel_arrays", "GL_INTEL_texture_scissor",
				"GL_MESA_pack_invert", "GL_MESA_resize_buffers",
				"GL_MESA_window_pos", "GL_MESAX_texture_stack",
				"GL_MESA_ycbcr_texture", "GL_NV_blend_square",
				"GL_NV_conditional_render", "GL_NV_copy_depth_to_color",
				"GL_NV_copy_image", "GL_NV_depth_buffer_float",
				"GL_NV_depth_clamp", "GL_NV_evaluators",
				"GL_NV_explicit_multisample", "GL_NV_fence",
				"GL_NV_float_buffer", "GL_NV_fog_distance",
				"GL_NV_fragment_program", "GL_NV_fragment_program2",
				"GL_NV_fragment_program4", "GL_NV_fragment_program_option",
				"GL_NV_framebuffer_multisample_coverage",
				"GL_NV_geometry_program4", "GL_NV_geometry_shader4",
				"GL_NV_gpu_program4", "GL_NV_half_float",
				"GL_NV_light_max_exponent", "GL_NV_multisample_filter_hint",
				"GL_NV_occlusion_query", "GL_NV_packed_depth_stencil",
				"GL_NV_parameter_buffer_object",
				"GL_NV_parameter_buffer_object2", "GL_NV_pixel_data_range",
				"GL_NV_point_sprite", "GL_NV_present_video",
				"GL_NV_primitive_restart", "GL_NV_register_combiners",
				"GL_NV_register_combiners2", "GL_NV_shader_buffer_load",
				"GL_NV_texgen_emboss", "GL_NV_texgen_reflection",
				"GL_NV_texture_barrier", "GL_NV_texture_compression_vtc",
				"GL_NV_texture_env_combine4", "GL_NV_texture_expand_normal",
				"GL_NV_texture_rectangle", "GL_NV_texture_shader",
				"GL_NV_texture_shader2", "GL_NV_texture_shader3",
				"GL_NV_transform_feedback", "GL_NV_transform_feedback2",
				"GL_NV_vertex_array_range", "GL_NV_vertex_array_range2",
				"GL_NV_vertex_buffer_unified_memory", "GL_NV_vertex_program",
				"GL_NV_vertex_program1_1", "GL_NV_vertex_program2",
				"GL_NV_vertex_program2_option", "GL_NV_vertex_program3",
				"GL_NV_vertex_program4", "GL_NV_video_capture",
				"GL_OES_read_format", "GL_OML_interlace", "GL_OML_resample",
				"GL_OML_subsample", "GL_PGI_misc_hints", "GL_PGI_vertex_hints",
				"GL_REND_screen_coordinates", "GL_S3_s3tc",
				"GL_SGI_color_matrix", "GL_SGI_color_table",
				"GL_SGI_depth_pass_instrument", "GL_SGIS_detail_texture",
				"GL_SGIS_fog_function", "GL_SGIS_generate_mipmap",
				"GL_SGIS_multisample", "GL_SGIS_pixel_texture",
				"GL_SGIS_point_line_texgen", "GL_SGIS_point_parameters",
				"GL_SGIS_sharpen_texture", "GL_SGIS_texture4D",
				"GL_SGIS_texture_border_clamp", "GL_SGIS_texture_color_mask",
				"GL_SGIS_texture_edge_clamp", "GL_SGIS_texture_filter4",
				"GL_SGIS_texture_lod", "GL_SGIS_texture_select",
				"GL_SGI_texture_color_table", "GL_SGIX_async",
				"GL_SGIX_async_histogram", "GL_SGIX_async_pixel",
				"GL_SGIX_blend_alpha_minmax", "GL_SGIX_calligraphic_fragment",
				"GL_SGIX_clipmap", "GL_SGIX_convolution_accuracy",
				"GL_SGIX_depth_pass_instrument", "GL_SGIX_depth_texture",
				"GL_SGIX_flush_raster", "GL_SGIX_fog_offset",
				"GL_SGIX_fog_scale", "GL_SGIX_fragment_lighting",
				"GL_SGIX_framezoom", "GL_SGIX_igloo_interface",
				"GL_SGIX_impact_pixel_texture", "GL_SGIX_instruments",
				"GL_SGIX_interlace", "GL_SGIX_ir_instrument1",
				"GL_SGIX_list_priority", "GL_SGIX_pixel_texture",
				"GL_SGIX_pixel_tiles", "GL_SGIX_polynomial_ffd",
				"GL_SGIX_reference_plane", "GL_SGIX_resample",
				"GL_SGIX_scalebias_hint", "GL_SGIX_shadow",
				"GL_SGIX_shadow_ambient", "GL_SGIX_sprite", "GL_SGIX_subsample",
				"GL_SGIX_tag_sample_buffer", "GL_SGIX_texture_add_env",
				"GL_SGIX_texture_coordinate_clamp", "GL_SGIX_texture_lod_bias",
				"GL_SGIX_texture_multi_buffer", "GL_SGIX_texture_scale_bias",
				"GL_SGIX_texture_select", "GL_SGIX_vertex_preclip",
				"GL_SGIX_ycrcb", "GL_SGIX_ycrcba", "GL_SGIX_ycrcb_subsample",
				"GL_SUN_convolution_border_modes", "GL_SUN_global_alpha",
				"GL_SUN_mesh_array", "GL_SUN_slice_accum",
				"GL_SUN_triangle_list", "GL_SUN_vertex",
				"GL_SUNX_constant_data", "GL_WIN_phong_shading",
				"GL_WIN_specular_fog" };

		enum EOpenGLFeatures
		{
			IRR_3DFX_multisample = 0,
			IRR_3DFX_tbuffer,
			IRR_3DFX_texture_compression_FXT1,
			IRR_AMD_draw_buffers_blend,
			IRR_AMD_performance_monitor,
			IRR_AMD_texture_texture4,
			IRR_AMD_vertex_shader_tesselator,
			IRR_APPLE_aux_depth_stencil,
			IRR_APPLE_client_storage,
			IRR_APPLE_element_array,
			IRR_APPLE_fence,
			IRR_APPLE_float_pixels,
			IRR_APPLE_flush_buffer_range,
			IRR_APPLE_object_purgeable,
			IRR_APPLE_rgb_422,
			IRR_APPLE_row_bytes,
			IRR_APPLE_specular_vector,
			IRR_APPLE_texture_range,
			IRR_APPLE_transform_hint,
			IRR_APPLE_vertex_array_object,
			IRR_APPLE_vertex_array_range,
			IRR_APPLE_vertex_program_evaluators,
			IRR_APPLE_ycbcr_422,
			IRR_ARB_color_buffer_float,
			IRR_ARB_compatibility,
			IRR_ARB_copy_buffer,
			IRR_ARB_depth_buffer_float,
			IRR_ARB_depth_clamp,
			IRR_ARB_depth_texture,
			IRR_ARB_draw_buffers,
			IRR_ARB_draw_buffers_blend,
			IRR_ARB_draw_elements_base_vertex,
			IRR_ARB_draw_instanced,
			IRR_ARB_fragment_coord_conventions,
			IRR_ARB_fragment_program,
			IRR_ARB_fragment_program_shadow,
			IRR_ARB_fragment_shader,
			IRR_ARB_framebuffer_object,
			IRR_ARB_framebuffer_sRGB,
			IRR_ARB_geometry_shader4,
			IRR_ARB_half_float_pixel,
			IRR_ARB_half_float_vertex,
			IRR_ARB_imaging,
			IRR_ARB_instanced_arrays,
			IRR_ARB_map_buffer_range,
			IRR_ARB_matrix_palette,
			IRR_ARB_multisample,
			IRR_ARB_multitexture,
			IRR_ARB_occlusion_query,
			IRR_ARB_pixel_buffer_object,
			IRR_ARB_point_parameters,
			IRR_ARB_point_sprite,
			IRR_ARB_provoking_vertex,
			IRR_ARB_sample_shading,
			IRR_ARB_seamless_cube_map,
			IRR_ARB_shader_objects,
			IRR_ARB_shader_texture_lod,
			IRR_ARB_shading_language_100,
			IRR_ARB_shadow,
			IRR_ARB_shadow_ambient,
			IRR_ARB_sync,
			IRR_ARB_texture_border_clamp,
			IRR_ARB_texture_buffer_object,
			IRR_ARB_texture_compression,
			IRR_ARB_texture_compression_rgtc,
			IRR_ARB_texture_cube_map,
			IRR_ARB_texture_cube_map_array,
			IRR_ARB_texture_env_add,
			IRR_ARB_texture_env_combine,
			IRR_ARB_texture_env_crossbar,
			IRR_ARB_texture_env_dot3,
			IRR_ARB_texture_float,
			IRR_ARB_texture_gather,
			IRR_ARB_texture_mirrored_repeat,
			IRR_ARB_texture_multisample,
			IRR_ARB_texture_non_power_of_two,
			IRR_ARB_texture_query_lod,
			IRR_ARB_texture_rectangle,
			IRR_ARB_texture_rg,
			IRR_ARB_transpose_matrix,
			IRR_ARB_uniform_buffer_object,
			IRR_ARB_vertex_array_bgra,
			IRR_ARB_vertex_array_object,
			IRR_ARB_vertex_blend,
			IRR_ARB_vertex_buffer_object,
			IRR_ARB_vertex_program,
			IRR_ARB_vertex_shader,
			IRR_ARB_window_pos,
			IRR_ATI_draw_buffers,
			IRR_ATI_element_array,
			IRR_ATI_envmap_bumpmap,
			IRR_ATI_fragment_shader,
			IRR_ATI_map_object_buffer,
			IRR_ATI_meminfo,
			IRR_ATI_pixel_format_float,
			IRR_ATI_pn_triangles,
			IRR_ATI_separate_stencil,
			IRR_ATI_text_fragment_shader,
			IRR_ATI_texture_env_combine3,
			IRR_ATI_texture_float,
			IRR_ATI_texture_mirror_once,
			IRR_ATI_vertex_array_object,
			IRR_ATI_vertex_attrib_array_object,
			IRR_ATI_vertex_streams,
			IRR_EXT_422_pixels,
			IRR_EXT_abgr,
			IRR_EXT_bgra,
			IRR_EXT_bindable_uniform,
			IRR_EXT_blend_color,
			IRR_EXT_blend_equation_separate,
			IRR_EXT_blend_func_separate,
			IRR_EXT_blend_logic_op,
			IRR_EXT_blend_minmax,
			IRR_EXT_blend_subtract,
			IRR_EXT_clip_volume_hint,
			IRR_EXT_cmyka,
			IRR_EXT_color_subtable,
			IRR_EXT_compiled_vertex_array,
			IRR_EXT_convolution,
			IRR_EXT_coordinate_frame,
			IRR_EXT_copy_texture,
			IRR_EXT_cull_vertex,
			IRR_EXT_depth_bounds_test,
			IRR_EXT_direct_state_access,
			IRR_EXT_draw_buffers2,
			IRR_EXT_draw_instanced,
			IRR_EXT_draw_range_elements,
			IRR_EXT_fog_coord,
			IRR_EXT_framebuffer_blit,
			IRR_EXT_framebuffer_multisample,
			IRR_EXT_framebuffer_object,
			IRR_EXT_framebuffer_sRGB,
			IRR_EXT_geometry_shader4,
			IRR_EXT_gpu_program_parameters,
			IRR_EXT_gpu_shader4,
			IRR_EXT_histogram,
			IRR_EXT_index_array_formats,
			IRR_EXT_index_func,
			IRR_EXT_index_material,
			IRR_EXT_index_texture,
			IRR_EXT_light_texture,
			IRR_EXT_misc_attribute,
			IRR_EXT_multi_draw_arrays,
			IRR_EXT_multisample,
			IRR_EXT_packed_depth_stencil,
			IRR_EXT_packed_float,
			IRR_EXT_packed_pixels,
			IRR_EXT_paletted_texture,
			IRR_EXT_pixel_buffer_object,
			IRR_EXT_pixel_transform,
			IRR_EXT_pixel_transform_color_table,
			IRR_EXT_point_parameters,
			IRR_EXT_polygon_offset,
			IRR_EXT_provoking_vertex,
			IRR_EXT_rescale_normal,
			IRR_EXT_secondary_color,
			IRR_EXT_separate_shader_objects,
			IRR_EXT_separate_specular_color,
			IRR_EXT_shadow_funcs,
			IRR_EXT_shared_texture_palette,
			IRR_EXT_stencil_clear_tag,
			IRR_EXT_stencil_two_side,
			IRR_EXT_stencil_wrap,
			IRR_EXT_subtexture,
			IRR_EXT_texture,
			IRR_EXT_texture3D,
			IRR_EXT_texture_array,
			IRR_EXT_texture_buffer_object,
			IRR_EXT_texture_compression_latc,
			IRR_EXT_texture_compression_rgtc,
			IRR_EXT_texture_compression_s3tc,
			IRR_EXT_texture_cube_map,
			IRR_EXT_texture_env_add,
			IRR_EXT_texture_env_combine,
			IRR_EXT_texture_env_dot3,
			IRR_EXT_texture_filter_anisotropic,
			IRR_EXT_texture_integer,
			IRR_EXT_texture_lod_bias,
			IRR_EXT_texture_mirror_clamp,
			IRR_EXT_texture_object,
			IRR_EXT_texture_perturb_normal,
			IRR_EXT_texture_shared_exponent,
			IRR_EXT_texture_snorm,
			IRR_EXT_texture_sRGB,
			IRR_EXT_texture_swizzle,
			IRR_EXT_timer_query,
			IRR_EXT_transform_feedback,
			IRR_EXT_vertex_array,
			IRR_EXT_vertex_array_bgra,
			IRR_EXT_vertex_shader,
			IRR_EXT_vertex_weighting,
			IRR_FfdMaskSGIX,
			IRR_GREMEDY_frame_terminator,
			IRR_GREMEDY_string_marker,
			IRR_HP_convolution_border_modes,
			IRR_HP_image_transform,
			IRR_HP_occlusion_test,
			IRR_HP_texture_lighting,
			IRR_IBM_cull_vertex,
			IRR_IBM_multimode_draw_arrays,
			IRR_IBM_rasterpos_clip,
			IRR_IBM_texture_mirrored_repeat,
			IRR_IBM_vertex_array_lists,
			IRR_INGR_blend_func_separate,
			IRR_INGR_color_clamp,
			IRR_INGR_interlace_read,
			IRR_INGR_palette_buffer,
			IRR_INTEL_parallel_arrays,
			IRR_INTEL_texture_scissor,
			IRR_MESA_pack_invert,
			IRR_MESA_resize_buffers,
			IRR_MESA_window_pos,
			IRR_MESAX_texture_stack,
			IRR_MESA_ycbcr_texture,
			IRR_NV_blend_square,
			IRR_NV_conditional_render,
			IRR_NV_copy_depth_to_color,
			IRR_NV_copy_image,
			IRR_NV_depth_buffer_float,
			IRR_NV_depth_clamp,
			IRR_NV_evaluators,
			IRR_NV_explicit_multisample,
			IRR_NV_fence,
			IRR_NV_float_buffer,
			IRR_NV_fog_distance,
			IRR_NV_fragment_program,
			IRR_NV_fragment_program2,
			IRR_NV_fragment_program4,
			IRR_NV_fragment_program_option,
			IRR_NV_framebuffer_multisample_coverage,
			IRR_NV_geometry_program4,
			IRR_NV_geometry_shader4,
			IRR_NV_gpu_program4,
			IRR_NV_half_float,
			IRR_NV_light_max_exponent,
			IRR_NV_multisample_filter_hint,
			IRR_NV_occlusion_query,
			IRR_NV_packed_depth_stencil,
			IRR_NV_parameter_buffer_object,
			IRR_NV_parameter_buffer_object2,
			IRR_NV_pixel_data_range,
			IRR_NV_point_sprite,
			IRR_NV_present_video,
			IRR_NV_primitive_restart,
			IRR_NV_register_combiners,
			IRR_NV_register_combiners2,
			IRR_NV_shader_buffer_load,
			IRR_NV_texgen_emboss,
			IRR_NV_texgen_reflection,
			IRR_NV_texture_barrier,
			IRR_NV_texture_compression_vtc,
			IRR_NV_texture_env_combine4,
			IRR_NV_texture_expand_normal,
			IRR_NV_texture_rectangle,
			IRR_NV_texture_shader,
			IRR_NV_texture_shader2,
			IRR_NV_texture_shader3,
			IRR_NV_transform_feedback,
			IRR_NV_transform_feedback2,
			IRR_NV_vertex_array_range,
			IRR_NV_vertex_array_range2,
			IRR_NV_vertex_buffer_unified_memory,
			IRR_NV_vertex_program,
			IRR_NV_vertex_program1_1,
			IRR_NV_vertex_program2,
			IRR_NV_vertex_program2_option,
			IRR_NV_vertex_program3,
			IRR_NV_vertex_program4,
			IRR_NV_video_capture,
			IRR_OES_read_format,
			IRR_OML_interlace,
			IRR_OML_resample,
			IRR_OML_subsample,
			IRR_PGI_misc_hints,
			IRR_PGI_vertex_hints,
			IRR_REND_screen_coordinates,
			IRR_S3_s3tc,
			IRR_SGI_color_matrix,
			IRR_SGI_color_table,
			IRR_SGI_depth_pass_instrument,
			IRR_SGIS_detail_texture,
			IRR_SGIS_fog_function,
			IRR_SGIS_generate_mipmap,
			IRR_SGIS_multisample,
			IRR_SGIS_pixel_texture,
			IRR_SGIS_point_line_texgen,
			IRR_SGIS_point_parameters,
			IRR_SGIS_sharpen_texture,
			IRR_SGIS_texture4D,
			IRR_SGIS_texture_border_clamp,
			IRR_SGIS_texture_color_mask,
			IRR_SGIS_texture_edge_clamp,
			IRR_SGIS_texture_filter4,
			IRR_SGIS_texture_lod,
			IRR_SGIS_texture_select,
			IRR_SGI_texture_color_table,
			IRR_SGIX_async,
			IRR_SGIX_async_histogram,
			IRR_SGIX_async_pixel,
			IRR_SGIX_blend_alpha_minmax,
			IRR_SGIX_calligraphic_fragment,
			IRR_SGIX_clipmap,
			IRR_SGIX_convolution_accuracy,
			IRR_SGIX_depth_pass_instrument,
			IRR_SGIX_depth_texture,
			IRR_SGIX_flush_raster,
			IRR_SGIX_fog_offset,
			IRR_SGIX_fog_scale,
			IRR_SGIX_fragment_lighting,
			IRR_SGIX_framezoom,
			IRR_SGIX_igloo_interface,
			IRR_SGIX_impact_pixel_texture,
			IRR_SGIX_instruments,
			IRR_SGIX_interlace,
			IRR_SGIX_ir_instrument1,
			IRR_SGIX_list_priority,
			IRR_SGIX_pixel_texture,
			IRR_SGIX_pixel_tiles,
			IRR_SGIX_polynomial_ffd,
			IRR_SGIX_reference_plane,
			IRR_SGIX_resample,
			IRR_SGIX_scalebias_hint,
			IRR_SGIX_shadow,
			IRR_SGIX_shadow_ambient,
			IRR_SGIX_sprite,
			IRR_SGIX_subsample,
			IRR_SGIX_tag_sample_buffer,
			IRR_SGIX_texture_add_env,
			IRR_SGIX_texture_coordinate_clamp,
			IRR_SGIX_texture_lod_bias,
			IRR_SGIX_texture_multi_buffer,
			IRR_SGIX_texture_scale_bias,
			IRR_SGIX_texture_select,
			IRR_SGIX_vertex_preclip,
			IRR_SGIX_ycrcb,
			IRR_SGIX_ycrcba,
			IRR_SGIX_ycrcb_subsample,
			IRR_SUN_convolution_border_modes,
			IRR_SUN_global_alpha,
			IRR_SUN_mesh_array,
			IRR_SUN_slice_accum,
			IRR_SUN_triangle_list,
			IRR_SUN_vertex,
			IRR_SUNX_constant_data,
			IRR_WIN_phong_shading,
			IRR_WIN_specular_fog,
			IRR_OpenGL_Feature_Count
		};

	}  // namespace video
}  // namespace irrgame

#endif /* EOPENGLFEATURES_H_ */

#endif /* VIDEO_DRIVER_OPENGL */
