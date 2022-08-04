// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
class BP_LargeShip_StandardHull_C: public Hull
{
public:
	Class StaticMeshComponent*                                   Occluder;                                          // 0x3f0(0x8)
	Class ChildActorComponent*                                   Damage;                                            // 0x3f8(0x8)
	Class ChildActorComponent*                                   Art;                                               // 0x400(0x8)
};


// Size 0x2e8
class BP_LargeShip_StandardHull_Art_C: public Actor
{
public:
	Class HitRegSnapshotRedirectImpactToReplicatedMovementAttachParentCom* HitRegSnapshotRedirectImpactToReplicatedMovementAttachParent; // 0x3c8(0x8)
	Class StaticMeshComponent*                                   shp_hatch_01_a;                                    // 0x3d0(0x8)
	Class PostProcessComponent*                                  FirePostProcess;                                   // 0x3d8(0x8)
	Class BoxComponent*                                          Fire_PP_Volume;                                    // 0x3e0(0x8)
	Class ChildActorComponent*                                   SideDoor;                                          // 0x3e8(0x8)
	Class ChildActorComponent*                                   FrontDoor;                                         // 0x3f0(0x8)
	Class ChildActorComponent*                                   StaticDoors;                                       // 0x3f8(0x8)
	Class PostProcessComponent*                                  PostProcess2;                                      // 0x400(0x8)
	Class BoxComponent*                                          captains_PP_Volume_window;                         // 0x408(0x8)
	Class StaticMeshComponent*                                   shp_hull_rain_occlusion;                           // 0x410(0x8)
	Class SurfaceWaterComponent*                                 SurfaceWater;                                      // 0x418(0x8)
	Class StaticMeshComponent*                                   shp_captain_cabin_window_glass_ext_01_a_02;        // 0x420(0x8)
	Class StaticMeshComponent*                                   shp_captain_cabin_window_glass_ext_01_a_05;        // 0x428(0x8)
	Class StaticMeshComponent*                                   shp_captain_cabin_window_glass_ext_01_a_04;        // 0x430(0x8)
	Class StaticMeshComponent*                                   shp_captain_cabin_window_glass_ext_01_a_03;        // 0x438(0x8)
	Class StaticMeshComponent*                                   shp_captain_cabin_window_glass_ext_01_a_06;        // 0x440(0x8)
	Class StaticMeshComponent*                                   shp_captains_cabin_window_feature_glass_ext_01_a;  // 0x448(0x8)
	Class MergedStaticMeshComponent*                             Merged_ExteriorGlass;                              // 0x450(0x8)
	Class PostProcessComponent*                                  PostProcess1;                                      // 0x458(0x8)
	Class BoxComponent*                                          Ship_PP_Volume_A;                                  // 0x460(0x8)
	Class PostProcessComponent*                                  PostProcess;                                       // 0x468(0x8)
	Class BoxComponent*                                          Captain_PP_volume;                                 // 0x470(0x8)
	Class StaticMeshComponent*                                   shp_deck_forecastle_steps_01_a;                    // 0x478(0x8)
	Class StaticMeshComponent*                                   shp_balustrade_forecastle_02_a;                    // 0x480(0x8)
	Class StaticMeshComponent*                                   shp_balustrade_forecastle_02_a1;                   // 0x488(0x8)
	Class StaticMeshComponent*                                   shp_hatch_02_a;                                    // 0x490(0x8)
	Class StaticMeshComponent*                                   shp_captain_cabin_window_01_a_02;                  // 0x498(0x8)
	Class StaticMeshComponent*                                   shp_captain_cabin_window_01_a_06;                  // 0x4a0(0x8)
	Class StaticMeshComponent*                                   shp_captain_cabin_window_01_a_03;                  // 0x4a8(0x8)
	Class StaticMeshComponent*                                   shp_captain_cabin_window_01_a_04;                  // 0x4b0(0x8)
	Class StaticMeshComponent*                                   shp_captain_cabin_window_01_a_05;                  // 0x4b8(0x8)
	Class StaticMeshComponent*                                   shp_hull_hatch_01_a_01;                            // 0x4c0(0x8)
	Class StaticMeshComponent*                                   shp_hull_hatch_01_a_03;                            // 0x4c8(0x8)
	Class StaticMeshComponent*                                   shp_hull_hatch_01_a_02;                            // 0x4d0(0x8)
	Class StaticMeshComponent*                                   shp_hull_hatch_01_a_04;                            // 0x4d8(0x8)
	Class StaticMeshComponent*                                   shp_hull_hatch_01_a_05;                            // 0x4e0(0x8)
	Class StaticMeshComponent*                                   shp_hull_hatch_01_a_06;                            // 0x4e8(0x8)
	Class StaticMeshComponent*                                   shp_hull_hatch_01_a_07;                            // 0x4f0(0x8)
	Class StaticMeshComponent*                                   shp_hull_hatch_01_a_08;                            // 0x4f8(0x8)
	Class StaticMeshComponent*                                   shp_hull_hatch_01_a_09;                            // 0x500(0x8)
	Class StaticMeshComponent*                                   shp_hull_hatch_01_a;                               // 0x508(0x8)
	Class StaticMeshComponent*                                   shp_hull_hatch_01_a;                               // 0x510(0x8)
	Class StaticMeshComponent*                                   shp_hull_hatch_01_a;                               // 0x518(0x8)
	Class StaticMeshComponent*                                   shp_hull_shelf_01_a_06;                            // 0x520(0x8)
	Class StaticMeshComponent*                                   shp_hull_shelf_01_a_01;                            // 0x528(0x8)
	Class StaticMeshComponent*                                   shp_hull_shelf_01_a_02;                            // 0x530(0x8)
	Class StaticMeshComponent*                                   shp_hull_shelf_01_a_03;                            // 0x538(0x8)
	Class StaticMeshComponent*                                   shp_hull_shelf_01_a_04;                            // 0x540(0x8)
	Class StaticMeshComponent*                                   shp_hull_shelf_01_a_05;                            // 0x548(0x8)
	Class StaticMeshComponent*                                   shp_captains_cabin_window_feature_01_a;            // 0x550(0x8)
	Class StaticMeshComponent*                                   shp_sterncastle_wheel_balustrade_01_a;             // 0x558(0x8)
	Class StaticMeshComponent*                                   shp_balustrade_long_01_a_01;                       // 0x560(0x8)
	Class StaticMeshComponent*                                   shp_balustrade_long_01_a_02;                       // 0x568(0x8)
	Class StaticMeshComponent*                                   shp_balustrade_long_01_a_03;                       // 0x570(0x8)
	Class StaticMeshComponent*                                   shp_balustrade_long_01_a_04;                       // 0x578(0x8)
	Class StaticMeshComponent*                                   shp_deck_sterncastle_flagpole_01_a;                // 0x580(0x8)
	Class StaticMeshComponent*                                   shp_balustrade_forecastle_curve_01_a_02;           // 0x588(0x8)
	Class StaticMeshComponent*                                   shp_captains_cabin_balcony_bannister_01_a;         // 0x590(0x8)
	Class StaticMeshComponent*                                   shp_balustrade_forecastle_curve_01_a_01;           // 0x598(0x8)
	Class StaticMeshComponent*                                   cmn_driftwood_01_a;                                // 0x5a0(0x8)
	Class StaticMeshComponent*                                   shp_rear_window_01_a;                              // 0x5a8(0x8)
	Class StaticMeshComponent*                                   shp_captain_cabin_side_door_porch_01_a;            // 0x5b0(0x8)
	Class StaticMeshComponent*                                   cmn_driftwood_01_a2;                               // 0x5b8(0x8)
	Class MergedStaticMeshComponent*                             MergedStaticMesh_col;                              // 0x5c0(0x8)
	Class StaticMeshComponent*                                   shp_galleon_harpoon_placement_01_a;                // 0x5c8(0x8)
	Class StaticMeshComponent*                                   shp_balustrade_cap_01_a_01;                        // 0x5d0(0x8)
	Class StaticMeshComponent*                                   shp_balustrade_cap_01_a_02;                        // 0x5d8(0x8)
	Class StaticMeshComponent*                                   shp_balustrade_cap_01_a_03;                        // 0x5e0(0x8)
	Class StaticMeshComponent*                                   shp_balustrade_cap_01_a_04;                        // 0x5e8(0x8)
	Class StaticMeshComponent*                                   shp_balustrade_cap_01_a;                           // 0x5f0(0x8)
	Class StaticMeshComponent*                                   shp_balustrade_cap_01_a;                           // 0x5f8(0x8)
	Class StaticMeshComponent*                                   shp_balustrade_cap_01_a;                           // 0x600(0x8)
	Class StaticMeshComponent*                                   shp_balustrade_cap_01_a;                           // 0x608(0x8)
	Class StaticMeshComponent*                                   shp_hull_rudder_hinge_01_a;                        // 0x610(0x8)
	Class StaticMeshComponent*                                   shp_rope_rigging_rear_01_a;                        // 0x618(0x8)
	Class StaticMeshComponent*                                   shp_rope_coil_01_a;                                // 0x620(0x8)
	Class StaticMeshComponent*                                   shp_rope_coil_02_a;                                // 0x628(0x8)
	Class StaticMeshComponent*                                   shp_rope_coil_04_a_03;                             // 0x630(0x8)
	Class StaticMeshComponent*                                   shp_rope_coil_04_a_04;                             // 0x638(0x8)
	Class StaticMeshComponent*                                   shp_rope_coil_04_a_05;                             // 0x640(0x8)
	Class StaticMeshComponent*                                   shp_mast_trim_01_a;                                // 0x648(0x8)
	Class StaticMeshComponent*                                   shp_mast_trim_01_a1;                               // 0x650(0x8)
	Class StaticMeshComponent*                                   shp_mast_trim_01_a2;                               // 0x658(0x8)
	Class StaticMeshComponent*                                   shp_capstan_trim_01_a;                             // 0x660(0x8)
	Class MergedStaticMeshComponent*                             MergedStaticMesh;                                  // 0x668(0x8)
	Class StaticMeshComponent*                                   cmn_walk_plank_01_a1;                              // 0x670(0x8)
	Class StaticMeshComponent*                                   cmn_walk_plank_01_a;                               // 0x678(0x8)
	Class ChildActorComponent*                                   Interior_Captains_Cabin;                           // 0x680(0x8)
	Class ChildActorComponent*                                   Interior_Brig_Deck;                                // 0x688(0x8)
	Class ChildActorComponent*                                   Interior_Map_Deck;                                 // 0x690(0x8)
	Class StaticMeshComponent*                                   shp_stern_staircase_01_a_02;                       // 0x698(0x8)
	Class StaticMeshComponent*                                   shp_stern_staircase_01_a_01;                       // 0x6a0(0x8)
	Class StaticMeshComponent*                                   shp_galleon_main_deck_01_a;                        // 0x6a8(0x8)
};


// Size 0x308
class BP_LargeShip_StandardHull_Art_Interior_Map_Deck_C: public Actor
{
public:
	Class HitRegSnapshotRedirectImpactToReplicatedMovementAttachParentCom* HitRegSnapshotRedirectImpactToReplicatedMovementAttachParent; // 0x3c8(0x8)
	Class ChildActorComponent*                                   BP_LargeShip_MapDeck_Dressing_01_a;                // 0x3d0(0x8)
	Class ChildActorComponent*                                   BP_CookingPot;                                     // 0x3d8(0x8)
	Class StaticMeshComponent*                                   shp_cooker_02_a;                                   // 0x3e0(0x8)
	Class StaticMeshComponent*                                   shp_kitchen_worktop_01_a;                          // 0x3e8(0x8)
	Class StaticMeshComponent*                                   shp_inv_zone_01_a;                                 // 0x3f0(0x8)
	Class StaticMeshComponent*                                   cap_cabin_rug_02_a;                                // 0x3f8(0x8)
	Class StaticMeshComponent*                                   shp_hatch_02_a;                                    // 0x400(0x8)
	Class StaticMeshComponent*                                   shp_mast_hull_01_a_01;                             // 0x408(0x8)
	Class StaticMeshComponent*                                   shp_mast_hull_01_a;                                // 0x410(0x8)
	Class StaticMeshComponent*                                   shp_mast_hull_01_a_02;                             // 0x418(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_01_a;                           // 0x420(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_01_a_03;                        // 0x428(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_01_a_01;                        // 0x430(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_01_a_02;                        // 0x438(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_01_a_04;                        // 0x440(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_01_a_05;                        // 0x448(0x8)
	Class MergedStaticMeshComponent*                             MergedStaticMesh_col;                              // 0x450(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_02_a19;                         // 0x458(0x8)
	Class StaticMeshComponent*                                   shp_int_map_swing_rope_04_a;                       // 0x460(0x8)
	Class StaticMeshComponent*                                   shp_int_map_swing_rope_02_a;                       // 0x468(0x8)
	Class StaticMeshComponent*                                   shp_int_map_swing_rope_03_a;                       // 0x470(0x8)
	Class StaticMeshComponent*                                   shp_int_map_swing_rope_01_a;                       // 0x478(0x8)
	Class StaticMeshComponent*                                   shp_kitchen_shelf_01_a_01;                         // 0x480(0x8)
	Class StaticMeshComponent*                                   shp_kitchen_extractor_01_a;                        // 0x488(0x8)
	Class StaticMeshComponent*                                   shp_int_map_beam_01_b;                             // 0x490(0x8)
	Class StaticMeshComponent*                                   shp_int_map_beam_01_b_01;                          // 0x498(0x8)
	Class StaticMeshComponent*                                   shp_kitchen_shelf_01_a;                            // 0x4a0(0x8)
	Class StaticMeshComponent*                                   shp_kitchen_shelf_02_a;                            // 0x4a8(0x8)
	Class StaticMeshComponent*                                   shp_int_map_beam_01_a;                             // 0x4b0(0x8)
	Class StaticMeshComponent*                                   shp_int_map_beam_01_a_01;                          // 0x4b8(0x8)
	Class StaticMeshComponent*                                   shp_int_map_beam_01_a_02;                          // 0x4c0(0x8)
	Class StaticMeshComponent*                                   shp_int_map_beam_01_a_03;                          // 0x4c8(0x8)
	Class StaticMeshComponent*                                   shp_int_map_beam_01_a_04;                          // 0x4d0(0x8)
	Class StaticMeshComponent*                                   shp_int_map_beam_01_a_05;                          // 0x4d8(0x8)
	Class StaticMeshComponent*                                   shp_int_map_block_arm_01_a_02;                     // 0x4e0(0x8)
	Class StaticMeshComponent*                                   shp_int_map_beam_01_a_07;                          // 0x4e8(0x8)
	Class StaticMeshComponent*                                   shp_int_map_beam_01_a_08;                          // 0x4f0(0x8)
	Class StaticMeshComponent*                                   shp_int_map_beam_01_a_09;                          // 0x4f8(0x8)
	Class StaticMeshComponent*                                   shp_int_map_block_arm_01_a;                        // 0x500(0x8)
	Class StaticMeshComponent*                                   shp_int_map_block_arm_01_a_01;                     // 0x508(0x8)
	Class StaticMeshComponent*                                   shp_int_map_beam_01_a_06;                          // 0x510(0x8)
	Class StaticMeshComponent*                                   shp_int_map_block_arm_01_a_03;                     // 0x518(0x8)
	Class StaticMeshComponent*                                   shp_int_map_block_arm_01_a_04;                     // 0x520(0x8)
	Class StaticMeshComponent*                                   shp_int_map_block_arm_01_a_05;                     // 0x528(0x8)
	Class StaticMeshComponent*                                   shp_int_map_block_arm_01_a_06;                     // 0x530(0x8)
	Class StaticMeshComponent*                                   shp_int_map_block_arm_01_a_07;                     // 0x538(0x8)
	Class StaticMeshComponent*                                   shp_int_map_block_arm_01_a_08;                     // 0x540(0x8)
	Class StaticMeshComponent*                                   shp_int_map_block_arm_01_a_09;                     // 0x548(0x8)
	Class StaticMeshComponent*                                   shp_int_map_block_arm_01_a;                        // 0x550(0x8)
	Class StaticMeshComponent*                                   shp_int_map_floor_beam_01_a;                       // 0x558(0x8)
	Class StaticMeshComponent*                                   shp_int_map_ceiling_beam_01_a_05;                  // 0x560(0x8)
	Class StaticMeshComponent*                                   shp_int_map_floor_beam_01_a_02;                    // 0x568(0x8)
	Class StaticMeshComponent*                                   shp_int_map_floor_beam_01_a_03;                    // 0x570(0x8)
	Class StaticMeshComponent*                                   shp_int_map_floor_beam_01_a_04;                    // 0x578(0x8)
	Class StaticMeshComponent*                                   shp_int_map_ceiling_beam_01_a;                     // 0x580(0x8)
	Class StaticMeshComponent*                                   shp_int_map_ceiling_beam_01_a_01;                  // 0x588(0x8)
	Class StaticMeshComponent*                                   shp_int_map_ceiling_beam_01_a_02;                  // 0x590(0x8)
	Class StaticMeshComponent*                                   shp_int_map_ceiling_beam_01_a_03;                  // 0x598(0x8)
	Class StaticMeshComponent*                                   shp_int_map_ceiling_beam_01_a_04;                  // 0x5a0(0x8)
	Class StaticMeshComponent*                                   shp_int_map_floor_beam_01_a_01;                    // 0x5a8(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_02_a;                           // 0x5b0(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_02_a_01;                        // 0x5b8(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_02_a_02;                        // 0x5c0(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_02_a_03;                        // 0x5c8(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_02_a1;                          // 0x5d0(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_02_a2;                          // 0x5d8(0x8)
	Class StaticMeshComponent*                                   shp_int_map_beam_01_a1;                            // 0x5e0(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_02_a4;                          // 0x5e8(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_02_a5;                          // 0x5f0(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_02_a6;                          // 0x5f8(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_02_a7;                          // 0x600(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_02_a8;                          // 0x608(0x8)
	Class StaticMeshComponent*                                   shp_int_map_ceiling_beam_01_a1;                    // 0x610(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_02_a3;                          // 0x618(0x8)
	Class StaticMeshComponent*                                   shp_int_map_floor_beam_01_a1;                      // 0x620(0x8)
	Class StaticMeshComponent*                                   shp_int_map_hatch_pull_01_a;                       // 0x628(0x8)
	Class StaticMeshComponent*                                   shp_int_map_hatch_pull_01_a1;                      // 0x630(0x8)
	Class StaticMeshComponent*                                   shp_int_map_hatch_pull_01_a2;                      // 0x638(0x8)
	Class StaticMeshComponent*                                   shp_int_map_hatch_pull_01_a3;                      // 0x640(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_02_a9;                          // 0x648(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_02_a10;                         // 0x650(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_02_a18;                         // 0x658(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_02_a12;                         // 0x660(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_02_a13;                         // 0x668(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_02_a14;                         // 0x670(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_02_a15;                         // 0x678(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_02_a16;                         // 0x680(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_02_a17;                         // 0x688(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_02_a11;                         // 0x690(0x8)
	Class StaticMeshComponent*                                   shp_int_map_beam_01_a3;                            // 0x698(0x8)
	Class StaticMeshComponent*                                   shp_int_map_beam_01_a4;                            // 0x6a0(0x8)
	Class StaticMeshComponent*                                   shp_int_map_ceiling_beam_01_a2;                    // 0x6a8(0x8)
	Class StaticMeshComponent*                                   shp_int_map_floor_beam_01_c;                       // 0x6b0(0x8)
	Class MergedStaticMeshComponent*                             MergedStaticMesh;                                  // 0x6b8(0x8)
	Class StaticMeshComponent*                                   shp_int_map_stairs_01_a;                           // 0x6c0(0x8)
	Class StaticMeshComponent*                                   shp_interior_map_deck_01_a;                        // 0x6c8(0x8)
};


// Size 0xa8
class BP_LargeShip_StandardHull_Art_Interior_Captains_Cabin_C: public Actor
{
public:
	Class HitRegSnapshotRedirectImpactToReplicatedMovementAttachParentCom* HitRegSnapshotRedirectImpactToReplicatedMovementAttachParent; // 0x3c8(0x8)
	Class StaticMeshComponent*                                   trs_candlestick_01_a;                              // 0x3d0(0x8)
	Class StaticMeshComponent*                                   cmn_candle_01_a;                                   // 0x3d8(0x8)
	Class StaticMeshComponent*                                   cap_inkwell_01_a;                                  // 0x3e0(0x8)
	Class ChildActorComponent*                                   CaptainsBookcase;                                  // 0x3e8(0x8)
	Class ChildActorComponent*                                   BP_LargeShip_CapCabin_Dressing_01_a;               // 0x3f0(0x8)
	Class StaticMeshComponent*                                   cap_cabinet_02_b;                                  // 0x3f8(0x8)
	Class StaticMeshComponent*                                   cap_cage_01_b;                                     // 0x400(0x8)
	Class StaticMeshComponent*                                   cap_cage_01_a;                                     // 0x408(0x8)
	Class ParticleSystemComponent*                               vfx_tavern_candle_looping_01_a8;                   // 0x410(0x8)
	Class ParticleSystemComponent*                               vfx_tavern_candle_looping_01_a1;                   // 0x418(0x8)
	Class StaticMeshComponent*                                   gmp_pl_cabin_cabinet_a_01;                         // 0x420(0x8)
	Class StaticMeshComponent*                                   shp_item_shelf_01_a;                               // 0x428(0x8)
	Class StaticMeshComponent*                                   cap_cabin_drawer_01_a;                             // 0x430(0x8)
	Class StaticMeshComponent*                                   cap_cabin_trunk_01_a;                              // 0x438(0x8)
	Class StaticMeshComponent*                                   cap_cabin_trunk_01_a1;                             // 0x440(0x8)
	Class MergedStaticMeshComponent*                             MergedStaticMesh_col;                              // 0x448(0x8)
	Class StaticMeshComponent*                                   cap_skull_candle_01_a;                             // 0x450(0x8)
	Class StaticMeshComponent*                                   cap_cabin_map_rolls_01_a;                          // 0x458(0x8)
	Class MergedStaticMeshComponent*                             MergedStaticMesh;                                  // 0x460(0x8)
	Class StaticMeshComponent*                                   shp_interior_captains_cabin_01_a;                  // 0x468(0x8)
};


// Size 0xe0
class BP_LargeShip_StandardHull_Art_Interior_Brig_Deck_C: public Actor
{
public:
	Class HitRegSnapshotRedirectImpactToReplicatedMovementAttachParentCom* HitRegSnapshotRedirectImpactToReplicatedMovementAttachParent; // 0x3c8(0x8)
	Class StaticMeshComponent*                                   shp_int_brig_cell_02_a;                            // 0x3d0(0x8)
	Class StaticMeshComponent*                                   shp_int_brig_beam_01_a6;                           // 0x3d8(0x8)
	Class StaticMeshComponent*                                   shp_int_brig_beam_01_b6;                           // 0x3e0(0x8)
	Class StaticMeshComponent*                                   shp_int_brig_beam_01_a8;                           // 0x3e8(0x8)
	Class StaticMeshComponent*                                   shp_int_brig_beam_01_b5;                           // 0x3f0(0x8)
	Class StaticMeshComponent*                                   shp_int_brig_beam_01_a3;                           // 0x3f8(0x8)
	Class StaticMeshComponent*                                   shp_int_brig_beam_01_b1;                           // 0x400(0x8)
	Class StaticMeshComponent*                                   shp_int_brig_beam_01_a1;                           // 0x408(0x8)
	Class StaticMeshComponent*                                   shp_int_brig_beam_01_b;                            // 0x410(0x8)
	Class StaticMeshComponent*                                   shp_int_brig_beam_01_b2;                           // 0x418(0x8)
	Class StaticMeshComponent*                                   shp_int_brig_beam_01_b4;                           // 0x420(0x8)
	Class StaticMeshComponent*                                   shp_int_brig_beam_01_b3;                           // 0x428(0x8)
	Class StaticMeshComponent*                                   shp_int_brig_beam_01_b7;                           // 0x430(0x8)
	Class MergedStaticMeshComponent*                             MergedStaticMesh;                                  // 0x438(0x8)
	Class StaticMeshComponent*                                   shp_int_brig_stairs_01_a;                          // 0x440(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_01_a7;                          // 0x448(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_01_a6;                          // 0x450(0x8)
	Class StaticMeshComponent*                                   shp_int_brig_beam_01_a5;                           // 0x458(0x8)
	Class StaticMeshComponent*                                   shp_int_brig_beam_01_a4;                           // 0x460(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_01_a5;                          // 0x468(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_01_a4;                          // 0x470(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_01_a3;                          // 0x478(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_01_a2;                          // 0x480(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_01_a1;                          // 0x488(0x8)
	Class StaticMeshComponent*                                   shp_int_map_pillar_01_a;                           // 0x490(0x8)
	Class MergedStaticMeshComponent*                             MergedStaticMesh_col;                              // 0x498(0x8)
	Class StaticMeshComponent*                                   shp_interior_brig_deck_01_a;                       // 0x4a0(0x8)
};


// Size 0x20
class BP_LargeShip_StandardHull_Art_Doors_C: public Actor
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x3c8(0x8)
	Class StaticMeshComponent*                                   StaticMesh1;                                       // 0x3d0(0x8)
	Class StaticMeshComponent*                                   StaticMesh;                                        // 0x3d8(0x8)
	Class SceneComponent*                                        DefaultSceneRoot;                                  // 0x3e0(0x8)
};


}