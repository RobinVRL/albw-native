/* compilefix: USA 0038BF34 (EU 0038BF10), the bomb-set check (Link's action 0xA4): the converted
 * stage-2 text with the collision query completed as the ARM does after its template copy
 * (radius, offset, start / end points, tag); the text left them zero and the sweep crashed on a
 * NULL point when Link set a bomb (BOOT_LOG 141). Confidence: high. */
#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00189580(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 *param_4, int param_5);
extern int func_002D3B08(int param_1);
extern int func_004A7620(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0054668C(int param_1,uint *param_2,float fparam_0,float fparam_1);
extern int func_0055696C(int param_1,int param_2);
extern float DAT_0038c0a0;
extern undefined4 DAT_0038c0a4;
extern float DAT_0038c0a8;
extern float DAT_0038c0ac;
extern undefined4 DAT_0038c0b0;
extern undefined4 DAT_0038c0b4;
extern uint DAT_0038c0b8;
extern undefined4 DAT_0038c0bc;
extern float DAT_0038c0c0;
extern float DAT_0038c0c4;
extern int *DAT_0038c0c8;
extern int *DAT_0038c0cc;

// USA 0038BF34 <- EU 0038BF10 (Ghidra, non-matching)
// GLOBAL DAT_0038c0a0 float
// GLOBAL DAT_0038c0a4 undefined4
// GLOBAL DAT_0038c0a8 float
// GLOBAL DAT_0038c0ac float
// GLOBAL DAT_0038c0b0 undefined4
// GLOBAL DAT_0038c0b4 undefined4
// GLOBAL DAT_0038c0b8 uint
// GLOBAL DAT_0038c0bc undefined4
// GLOBAL DAT_0038c0c0 float
// GLOBAL DAT_0038c0c4 float
// GLOBAL DAT_0038c0c8 int *
// GLOBAL DAT_0038c0cc int *

/* WARNING: Variable defined which should be unmapped: objStack_d0 */

undefined4 func_0038BF34(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  uint unaff_r6;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define objStack_d0 ((uint *)(albw_frame + 0x0))
  #define local_94 ((byte *)(albw_frame + 0x3c))
  #define uStack_84 (*(uint *)(albw_frame + 0x4c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x50))
  #define local_7c (*(undefined4 *)(albw_frame + 0x54))
  #define local_78 (*(undefined4 *)(albw_frame + 0x58))
  #define local_74 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x60))
  #define local_6c (*(undefined1 *)(albw_frame + 0x64))
  #define local_6b (*(undefined1 *)(albw_frame + 0x65))
  #define local_68 (*(float *)(albw_frame + 0x68))
  #define local_64 (*(float *)(albw_frame + 0x6c))
  #define local_60 (*(float *)(albw_frame + 0x70))
  #define fStack_5c (*(float *)(albw_frame + 0x74))
  #define local_58 (*(undefined4 *)(albw_frame + 0x78))
  #define local_50 (*(float *)(albw_frame + 0x80))
  #define local_4c (*(float *)(albw_frame + 0x84))
  #define local_48 (*(float *)(albw_frame + 0x88))
  #define local_44 (*(float *)(albw_frame + 0x8c))
  #define fStack_40 (*(float *)(albw_frame + 0x90))
  #define fStack_3c (*(float *)(albw_frame + 0x94))
  #define local_2c ((undefined4 *)(albw_frame + 0xa4))
  #define iStack_18 (*(int *)(albw_frame + 0xb8))
  #define local_14 (*(uint *)(albw_frame + 0xbc))
  iStack_18 = param_1;
  local_14 = param_2;
  func_002D3B08(*(int *)(*(int *)(param_1 + 0x28) + 0x5f8));
  pfVar3 = *(float **)(param_1 + 0x30);
  local_68 = *pfVar3;
  local_64 = pfVar3[1];
  local_60 = pfVar3[2];
  func_004D80A4(&fStack_5c,local_14,DAT_0038c0a0);
  local_58 = DAT_0038c0a4;
  uVar4 = DAT_0038c0a4;
  func_00115C54(&local_44,&local_68,&fStack_5c);
  local_50 = local_44;
  local_4c = fStack_40;
  local_48 = fStack_3c;
  iVar1 = func_0054668C(param_1,&local_14,DAT_0038c0ac,DAT_0038c0a8);
  uStack_84 = unaff_r6 & 0xffff0000 | DAT_0038c0b8;
  local_94[0] = 0;
  local_94[1] = 0;
  local_94[2] = 0;
  local_94[3] = 0;
  local_94[4] = 0;
  local_94[5] = 0;
  local_94[6] = 0;
  local_94[7] = 0;
  local_94[8] = 0;
  local_94[9] = 0;
  local_94[10] = 0;
  local_94[0xb] = 0;
  local_80 = 0xff;
  local_94[0xc] = 0;
  local_94[0xd] = 0;
  local_94[0xe] = 0;
  local_94[0xf] = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_6c = 0;
  local_6b = 1;
  local_70 = uVar4;
  func_00110D44(objStack_d0,local_94,0x2a);
  /* EU 38BFF0..38C024: the query fields after the 0x2A-byte template (lost stores, BOOT_LOG 141):
   * +0x2C radius 0.4, +0x30 offset (0, 0.45, 0), +0x20 start = this->[0x30] (Link's position),
   * +0x1C end = &sp[0x80] (local_50), +0x14 = 0xDDF */
  objStack_d0[0xb] = 0x3ecccccdu;
  objStack_d0[0xc] = 0;
  objStack_d0[0xd] = 0x3ee66667u;
  objStack_d0[0xe] = 0;
  objStack_d0[8] = *(uint *)(param_1 + 0x30);
  objStack_d0[7] = (uint)(uintptr_t)&local_50;
  objStack_d0[5] = 0xddf;
  iVar2 = func_004A7620(*DAT_0038c0c8,objStack_d0,0xff,DAT_0038c0c4,DAT_0038c0c0);
  if ((iVar2 == 0) && (iVar1 != 1)) {
    local_68 = local_50;
    local_64 = local_4c;
    local_60 = local_48;
  }
  objStack_d0[0] = func_0055696C(*DAT_0038c0cc,2);
  local_2c[0] = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x2cc);
  return func_00189580(&local_68,local_14,0,local_2c,objStack_d0[0]);
}

