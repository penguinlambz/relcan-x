#ifndef SEGMENT7_H
#define SEGMENT7_H

#include <PR/ultratypes.h>
#include <PR/gbi.h>

// from main menu segment 7
extern u8 dl_menu_idle_hand[];
extern u8 dl_menu_grabbing_hand[];
extern u8 menu_hud_lut[];
extern u8 menu_font_lut[];
extern u8 dl_menu_ia8_text_begin[];
extern u8 dl_menu_ia8_text_end[];
extern u8 dl_menu_rgba16_wood_course[];
#ifdef VERSION_EU
extern u8 dl_menu_rgba16_wood_course_end[];
extern u8 dl_menu_texture_course_upper[];
extern u8 dl_menu_texture_niveau_upper[];
extern u8 dl_menu_texture_kurs_upper[];

extern const u8 eu_course_strings_en_table[];
extern const u8 eu_course_strings_fr_table[];
extern const u8 eu_course_strings_de_table[];
#endif

// from intro_segment7
extern Lights1 titlescreen_x1_f3d_lights;
extern Lights1 titlescreen_x2_f3d_lights;
extern Lights1 titlescreen_x3_f3d_lights;
extern Lights1 titlescreen_x4_f3d_lights;
extern Lights1 titlescreen_x5_f3d_lights;
extern Lights1 titlescreen_x6_f3d_lights;
extern Lights1 titlescreen_x7_f3d_lights;
extern Lights1 titlescreen_x8_f3d_lights;
extern Lights1 titlescreen_x9_f3d_lights;
extern Lights1 titlescreen_x10_f3d_lights;
extern Lights1 titlescreen_x11_f3d_lights;
extern Lights1 titlescreen_x12_f3d_lights;
extern Vtx titlescreen_ts_cybertanuki_mesh_vtx_0[75];
extern Gfx titlescreen_ts_cybertanuki_mesh_tri_0[];
extern Vtx titlescreen_ts_cybertanuki_mesh_vtx_1[210];
extern Gfx titlescreen_ts_cybertanuki_mesh_tri_1[];
extern Vtx titlescreen_ts_cybertanuki_mesh_vtx_2[51];
extern Gfx titlescreen_ts_cybertanuki_mesh_tri_2[];
extern Vtx titlescreen_ts_cybertanuki_mesh_vtx_3[190];
extern Gfx titlescreen_ts_cybertanuki_mesh_tri_3[];
extern Vtx titlescreen_ts_cybertanuki_mesh_vtx_4[149];
extern Gfx titlescreen_ts_cybertanuki_mesh_tri_4[];
extern Vtx titlescreen_ts_cybertanuki_mesh_vtx_5[59];
extern Gfx titlescreen_ts_cybertanuki_mesh_tri_5[];
extern Vtx titlescreen_ts_cybertanuki_mesh_vtx_6[158];
extern Gfx titlescreen_ts_cybertanuki_mesh_tri_6[];
extern Vtx titlescreen_ts_cybertanuki_mesh_vtx_7[73];
extern Gfx titlescreen_ts_cybertanuki_mesh_tri_7[];
extern Vtx titlescreen_ts_cybertanuki_mesh_vtx_8[121];
extern Gfx titlescreen_ts_cybertanuki_mesh_tri_8[];
extern Vtx titlescreen_ts_cybertanuki_mesh_vtx_9[27];
extern Gfx titlescreen_ts_cybertanuki_mesh_tri_9[];
extern Vtx titlescreen_ts_cybertanuki_mesh_vtx_10[317];
extern Gfx titlescreen_ts_cybertanuki_mesh_tri_10[];
extern Vtx titlescreen_ts_cybertanuki_mesh_vtx_11[157];
extern Gfx titlescreen_ts_cybertanuki_mesh_tri_11[];
extern Gfx mat_titlescreen_x1_f3d[];
extern Gfx mat_titlescreen_x2_f3d[];
extern Gfx mat_titlescreen_x3_f3d[];
extern Gfx mat_titlescreen_x4_f3d[];
extern Gfx mat_titlescreen_x5_f3d[];
extern Gfx mat_titlescreen_x6_f3d[];
extern Gfx mat_titlescreen_x7_f3d[];
extern Gfx mat_titlescreen_x8_f3d[];
extern Gfx mat_titlescreen_x9_f3d[];
extern Gfx mat_titlescreen_x10_f3d[];
extern Gfx mat_titlescreen_x11_f3d[];
extern Gfx mat_titlescreen_x12_f3d[];
extern Gfx titlescreen_ts_cybertanuki_mesh[];

extern Gfx mario64_Shape_IndexedFaceSet_003_mesh[];
extern Gfx *intro_seg7_dl_0700B3A0;
extern Gfx *intro_seg7_dl_0700C6A0;
extern f32 intro_seg7_table_0700C790[];
extern f32 intro_seg7_table_0700C880[];

#endif // SEGMENT7_H
