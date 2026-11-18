#include "ghidra_types.h"

extern int func_0032EF74(float *param_1,float *param_2,float *param_3);
extern float func_005500C0(float *param_1,int param_2);
extern float DAT_0032edd4;

// USA 0032ECE0 <- EU 0032ECBC (Ghidra, non-matching)
// GLOBAL DAT_0032edd4 float

undefined4 func_0032ECE0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define afStack_e0 ((float *)(albw_frame + 0x0))
  #define afStack_b8 ((float *)(albw_frame + 0x28))
  #define afStack_ac ((float *)(albw_frame + 0x34))
  #define afStack_90 ((float *)(albw_frame + 0x50))
  #define afStack_84 ((float *)(albw_frame + 0x5c))
  #define afStack_68 ((float *)(albw_frame + 0x78))
  #define afStack_40 ((float *)(albw_frame + 0xa0))
  func_0032EF74(afStack_b8,param_1,param_2);
  func_0032EF74(afStack_90,param_3,param_4);
  func_0032EF74(afStack_e0,afStack_b8,afStack_ac);
  func_0032EF74(afStack_68,afStack_b8,afStack_90);
  func_0032EF74(afStack_40,afStack_b8,afStack_84);
  fVar1 = func_005500C0(afStack_e0,afStack_68);
  fVar2 = func_005500C0(afStack_e0,afStack_40);
  if (fVar1 * fVar2 <= DAT_0032edd4) {
    fVar1 = DAT_0032edd4;
    func_0032EF74(afStack_e0,afStack_90,afStack_84);
    func_0032EF74(afStack_68,afStack_90,afStack_b8);
    func_0032EF74(afStack_40,afStack_90,afStack_ac);
    fVar2 = func_005500C0(afStack_e0,afStack_68);
    fVar3 = func_005500C0(afStack_e0,afStack_40);
    if (fVar2 * fVar3 <= fVar1) {
      return 1;
    }
  }
  return 0;
}

