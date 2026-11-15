/* USA 005694A0 (EU 00569478): converted Ghidra text (build/decomp, round-3 stage 2) with one fix.
 * 00568B68 nw::lyt::Pane::GetVtxPos returns a Vec2 in s0:s1; Ghidra kept s0 only and the y read as the uninitialised in_s1.
 * y now comes from albw_lyt_vtx_pos_y, and the y of 00569264 (text position, also a Vec2) from
 * albw_lyt_text_pos_y (both native/game/func_00568B68.c). Boot stop 86 (CLASS: VFP
 * register-pair returns typed float). Confidence: high. */
float albw_lyt_vtx_pos_y(const unsigned char *pane);
float albw_lyt_text_pos_y(const unsigned char *pane, const float *size, int round);
#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern float func_00568B68(int param_1);
extern float func_00569264(int param_1,float *param_2,int param_3);

// USA 005694A0 <- EU 00569478 (Ghidra, non-matching)

void func_005694A0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float in_s1;
  float fVar3;
  float fVar4;
  float fVar5;
  
  func_001119F4(param_2,(undefined4 *)(param_1 + 0x48));
  fVar1 = func_00568B68(param_1);
  fVar3 = albw_lyt_vtx_pos_y((const unsigned char *)param_1);
  fVar2 = func_00569264(param_1,param_1 + 0x3c,0);
  fVar3 = fVar3 - albw_lyt_text_pos_y((const unsigned char *)param_1,(const float *)(param_1 + 0x3c),0);
  fVar5 = param_2[1];
  fVar1 = fVar1 + fVar2;
  fVar2 = param_2[5];
  fVar4 = param_2[9];
  param_2[1] = -fVar5;
  param_2[5] = -fVar2;
  param_2[9] = -fVar4;
  param_2[3] = *param_2 * fVar1 + fVar5 * fVar3 + param_2[3];
  param_2[7] = param_2[4] * fVar1 + fVar2 * fVar3 + param_2[7];
  param_2[0xb] = param_2[8] * fVar1 + fVar4 * fVar3 + param_2[0xb];
  return;
}

