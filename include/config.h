#ifndef CONFIG_H
#define CONFIG_H

/**
 * @file config.h
 * A catch-all file for configuring various bugfixes and other settings
 * (maybe eventually) in SM64
 */

// Bug Fixes
// --| US Version Nintendo Bug Fixes
/// Fixes bug where obtaining over 999 coins sets the number of lives to 999 (or -25)
#define BUGFIX_MAX_LIVES (0 || VERSION_US || VERSION_EU || VERSION_SH)
/// Fixes bug where the Boss music won't fade out after defeating King Bob-omb
#define BUGFIX_KING_BOB_OMB_FADE_MUSIC (0 || VERSION_US || VERSION_EU || VERSION_SH)
/// Fixes bug in Bob-Omb Battlefield where entering a warp stops the Koopa race music
#define BUGFIX_KOOPA_RACE_MUSIC (0 || VERSION_US || VERSION_EU || VERSION_SH)
/// Fixes bug where Piranha Plants do not reset their action state when the
/// player exits their activation radius.
#define BUGFIX_PIRANHA_PLANT_STATE_RESET (0 || VERSION_US || VERSION_EU || VERSION_SH)
/// Fixes bug where sleeping Piranha Plants damage players that bump into them
#define BUGFIX_PIRANHA_PLANT_SLEEP_DAMAGE (0 || VERSION_US || VERSION_SH || VERSION_IT)
/// Fixes bug where it shows a star when you grab a key in bowser battle stages
#define BUGFIX_STAR_BOWSER_KEY (0 || VERSION_US || VERSION_EU || VERSION_SH)

// --| Shindou Version Nintendo Bug Fixes
/// BLJ (Backwards Long Jump) speed build up fix, crushing SimpleFlips's dreams since July 1997
#define BUGFIX_BACKWARDS_LONGJUMP (0 || VERSION_SH || VERSION_IT)
#define BUGFIX_CONTROLLABLE_PLATFORM (0 || VERSION_SH || VERSION_IT)
#define BUGFIX_POLE_INTERACTION_FORWARD_VELOCITY (0 || VERSION_SH || VERSION_IT)
#define FEATURE_FACE_EASTER_EGG (0 || VERSION_SH || VERSION_IT)
/// TODO: Some RumblePak functions might still be defined explicitly, including linker file.
#define FEATURE_RUMBLE_PAK_SUPPORT (0 || VERSION_SH || VERSION_IT)
/// TODO: Some functions might still be defined explicitly.
#define FEATURE_RUMBLE_PAK_TITLE_GRAPHIC (0 || VERSION_SH || VERSION_IT)

// --| EU Version Bug Fixes
/// This fixes Wiggler reading UB on his first frame of his acceleration, as his health is not set.
#define BUGFIX_WIGGLER_HEALTH (0 || VERSION_EU)

// --| Ultimate Version Bug Fixes
/// Fixes bug where it shows burn smoke incorrectly
#define BUGFIX_BURN_SMOKE (0)
#define BUGFIX_TUXIE_HELD_STATE (0 || VERSION_IT)
#define BUGFIX_CASTLE_TRAP_OPEN_SOUND (0 || VERSION_IT)
#define BUGFIX_BULLY_KNOCKBACK_TIMER (0 || VERSION_IT)
#define BUGFIX_SHADOW_WATERLEVEL (0 || VERSION_IT)
#define BUGFIX_COLLISION_HITBOX_OVERLAP (0 || VERSION_IT)
#define BUGFIX_COLLISION_HURTBOX_OVERLAP (0 || VERSION_IT)
#define BUGFIX_SHELL_BACKWARDS_HYPERSPEED (0 || VERSION_IT)
#define BUGFIX_MARIO_CRAWLING_FALLTHROUGH (0 || VERSION_IT)
#define BUGFIX_AIR_HIT_WALL_VELOCITY (0 || VERSION_IT)
#define BUGFIX_AIR_HIT_WALL_ANIMATION (0 || VERSION_IT)
#define BUGFIX_CAMERA_WATER_HEIGHT (0 || VERSION_IT)
#define BUGFIX_CAMERA_BOSS_FIGHT_HEIGHT (0 || VERSION_IT)
#define BUGFIX_KOOPA_PINK_SHORTS (0 || VERSION_IT)
#define BUGFIX_AUDIO_LOAD_BANK_NOT_SEQUENCE (0 || VERSION_IT)

// --| Ultimate Version resurrection of lost features
#define RESURRECT_KLEPTO_STAR_ANIMATION (0 || VERSION_IT)
#define RESURRECT_CRACKED_ICE (0 || VERSION_IT)
#define RESURRECT_PYRAMID_EXPLODE_CUTSCENE (0 || VERSION_IT)

// --| Use the NTSC Vi tables instead of those PAL ones
#define ENABLE_TV_NTSC (0 || VERSION_JP || VERSION_US || VERSION_SH || VERSION_IT)

// Screen Size Defines
#define SCREEN_WIDTH 320
#define SCREEN_HEIGHT 240

// Border Height Define for NTSC Versions
#ifdef TARGET_N64

#if ENABLE_TV_NTSC
#define BORDER_HEIGHT 8
#else
#define BORDER_HEIGHT 1
#endif

#else
// What's the point of having a border?
#define BORDER_HEIGHT 0
#endif

#endif // CONFIG_H
