// 0x0E000648
const GeoLayout ssl_geo_000648[] = {
   GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
   GEO_OPEN_NODE(),
      GEO_ZBUFFER(0),
      GEO_OPEN_NODE(),
         GEO_NODE_ORTHO(100),
         GEO_OPEN_NODE(),
            GEO_BACKGROUND(BACKGROUND_DESERT, geo_skybox_main),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
      GEO_ZBUFFER(1),
      GEO_OPEN_NODE(),
         GEO_CAMERA_FRUSTUM_WITH_FUNC(45, 100, 20000, geo_camera_fov),
         GEO_OPEN_NODE(),
            GEO_CAMERA(1, 0, 2000, 6000, -2048, 0, -1024, geo_camera_main),
            GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_001_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_002_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_003_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_004_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_005_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_006_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_007_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_008_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_009_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_010_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_011_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_012_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_013_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_014_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_015_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_016_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_017_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_018_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_019_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_020_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_021_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_022_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_023_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_024_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_025_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_026_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_027_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_028_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_029_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_030_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_031_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_032_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_033_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_034_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_035_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_036_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_037_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_038_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_039_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_040_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_041_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_042_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_043_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_044_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_045_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_046_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_047_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_048_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_049_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_050_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_051_mesh_layer_1),
		GEO_DISPLAY_LIST(1, relcansslx_dl_instance_0_052_mesh_layer_1),
               //GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, ssl_seg7_dl_0700BD00),
               GEO_ASM(0x0801, geo_movtex_update_horizontal),
               GEO_ASM(   0, geo_movtex_pause_control),
               GEO_ASM(0x0801, geo_movtex_draw_water_regions),
               GEO_ASM(0x0851, geo_movtex_draw_water_regions),
               GEO_ASM(0x0801, geo_movtex_draw_colored),
               GEO_ASM(0x0802, geo_movtex_draw_colored),
               GEO_ASM(0x0803, geo_movtex_draw_colored),
               GEO_RENDER_OBJ(),
               GEO_ASM(   0, geo_envfx_main),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
      GEO_ZBUFFER(0),
      GEO_OPEN_NODE(),
         GEO_ASM(0, geo_cannon_circle_base),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
