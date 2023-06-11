#ifndef BOB_HEADER_H
#define BOB_HEADER_H

#include "types.h"

// geo
extern const GeoLayout bob_geo_000440[];
extern const GeoLayout bob_geo_000458[];
extern const GeoLayout bob_geo_000470[];
extern const GeoLayout bob_geo_000488[];

// leveldata
extern Lights1 creepradiohead_material_1_f3d_lights;
extern u8 creepradiohead_material_1_ci8[];
extern u8 creepradiohead_material_1_ci8_pal_rgba16[];
extern Vtx creepradiohead_instance_0_mesh_vtx_0[12];
extern Gfx creepradiohead_instance_0_mesh_tri_0[];
extern Gfx mat_creepradiohead_material_1_f3d[];
extern Gfx mat_revert_creepradiohead_material_1_f3d[];
extern Gfx creepradiohead_instance_0_mesh[];

extern const Gfx bob_seg7_dl_07004390[];
extern const Gfx bob_seg7_dl_07009D80[];
extern const Gfx bob_seg7_dl_0700A470[];
extern const Gfx bob_seg7_dl_0700A920[];
extern const Gfx bob_seg7_dl_0700DD18[];
extern const Gfx bob_seg7_dl_0700E338[];
extern const Gfx bob_seg7_dl_0700E458[];
extern const Gfx bob_seg7_dl_0700E768[];
extern const Gfx bob_seg7_dl_0700E8A0[];
extern const Collision bob_seg7_collision_level[];
extern const MacroObject bob_seg7_macro_objs[];
extern const Collision bob_seg7_collision_chain_chomp_gate[];
extern const Collision bob_seg7_collision_bridge[];
extern const Collision bob_seg7_collision_gate[];
extern const Trajectory bob_seg7_metal_ball_path0[];
extern const Trajectory bob_seg7_metal_ball_path1[];
extern const Trajectory bob_seg7_trajectory_koopa[];

// script
extern const LevelScript level_bob_entry[];

#endif
