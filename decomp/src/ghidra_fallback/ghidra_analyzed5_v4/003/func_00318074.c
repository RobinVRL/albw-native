#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern float func_0049216C(float *param_1,uint *param_2,float *param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2D1C(int param_1,float *param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float DAT_00318140;
extern undefined4 DAT_00318144;
extern char s_ThunderSt_00318134[];

// USA 00318074 <- EU 00318050 (Ghidra, non-matching)
// GLOBAL DAT_00318140 float
// GLOBAL DAT_00318144 undefined4
// GLOBAL s_ThunderSt_00318134 string

void func_00318074(int param_1)

{
  int iVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(int *)(albw_frame + 0x8))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0xc))
  #define afStack_60 ((float *)(albw_frame + 0x10))
  #define local_30 (*(uint *)(albw_frame + 0x40))
  #define local_2c (*(undefined4 *)(albw_frame + 0x44))
  #define local_28 (*(undefined4 *)(albw_frame + 0x48))
  #define fStack_20 (*(float *)(albw_frame + 0x50))
  #define local_1c (*(undefined4 *)(albw_frame + 0x54))
  piVar2 = (int *)(param_1 + 0x438);
  if (*(int *)(param_1 + 0x344) == 0) {
    *piVar2 = 0;
    *(undefined4 *)(param_1 + 0x43c) = 0;
  }
  else {
    iVar1 = *piVar2;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x43c))) {
      func_00110848(iVar1);
    }
    func_004A1B9C(&local_68,*(int *)(param_1 + 0x344),(uint *)s_ThunderSt_00318134);
    *piVar2 = local_68;
    *(undefined4 *)(param_1 + 0x43c) = uStack_64;
  }
  func_004D80A4(&fStack_20,*(uint *)(param_1 + 1000),DAT_00318140);
  local_1c = DAT_00318144;
  func_00115C54(&fStack_20,&fStack_20,(float *)(param_1 + 0x3d0));
  local_2c = *(undefined4 *)(param_1 + 1000);
  local_30 = 0;
  local_28 = 0;
  func_0049216C(afStack_60,&local_30,&fStack_20);
  iVar1 = *piVar2;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x43c))) {
    func_004A2D1C(iVar1,afStack_60);
  }
  return;
}

