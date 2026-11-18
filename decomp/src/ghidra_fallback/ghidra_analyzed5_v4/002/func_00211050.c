#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_003C2464(int param_1,int param_2,float fparam_0);
extern int func_003C2680(int param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A3138(int param_1,undefined4 *param_2,float fparam_0);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float func_0058AC38(int param_1);
extern float fRam00211198;
extern float fRam0021119c;
extern float fRam002111a0;
extern float fRam002111a4;
extern float fRam002111a8;
extern float fRam002111ac;
extern char s_Doodlebug_0021118c[];

// USA 00211050 <- EU 00211050 (Ghidra, non-matching)
// GLOBAL UNK_00211198 float
// GLOBAL UNK_0021119c float
// GLOBAL UNK_002111a0 float
// GLOBAL UNK_002111a4 float
// GLOBAL UNK_002111a8 float
// GLOBAL UNK_002111ac float
// GLOBAL s_Doodlebug_0021118c string

undefined4 func_00211050(int param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define iStack_30 (*(int *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define fStack_20 (*(float *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff7b | 2;
  func_004FABDC(param_1,0,0xffffffff,0);
  piVar2 = (int *)(param_1 + 0x98c);
  if (*(int *)(param_1 + 0x344) == 0) {
    *piVar2 = 0;
    *(undefined4 *)(param_1 + 0x990) = 0;
  }
  else {
    iVar1 = *piVar2;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x990))) {
      func_00110848(iVar1);
    }
    func_004A1B9C(&iStack_30,*(int *)(param_1 + 0x344),(uint *)s_Doodlebug_0021118c);
    *piVar2 = iStack_30;
    *(undefined4 *)(param_1 + 0x990) = uStack_2c;
  }
  uStack_24 = *(undefined4 *)(param_1 + 0x3d0);
  uStack_1c = *(undefined4 *)(param_1 + 0x3d8);
  fStack_20 = *(float *)(param_1 + 0x3d4) + fRam00211198;
  fVar3 = fRam002111a0;
  if (*(short *)(param_1 + 0x30) != 0) {
    fStack_20 = fStack_20 + fRam002111a4;
    fVar3 = fRam002111a8;
  }
  iVar1 = *piVar2;
  fparam_0 = fRam0021119c;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x990))) {
    func_004A3138(iVar1,&uStack_24,fVar3 * fRam002111ac);
  }
  func_003C2680(param_1 + 0x8e0);
  fVar3 = func_0058AC38(param_1);
  return func_003C2464(param_1 + 0x8e0,(int)fVar3,fparam_0);
}

