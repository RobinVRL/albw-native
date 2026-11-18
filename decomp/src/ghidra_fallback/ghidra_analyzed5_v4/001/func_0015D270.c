#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern void func_0015D0E0(int param_1);
extern int func_002228D0(int param_1,int param_2,uint param_3);
extern float func_0049216C(float *param_1,uint *param_2,float *param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2D1C(int param_1,float *param_2);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0054FA10(int param_1,uint param_2);
extern int func_0054FBC4(int param_1,float *param_2,float *param_3);
extern int func_0068C690(float *param_1);
extern float DAT_0015d40c;
extern float DAT_0015d410;
extern char s_AfterImage_0015d400[];

// USA 0015D270 <- EU 0015D274 (Ghidra, non-matching)
// GLOBAL DAT_0015d40c float
// GLOBAL DAT_0015d410 float
// GLOBAL s_AfterImage_0015d400 string

void func_0015D270(int param_1)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(int *)(albw_frame + 0x0))
  #define local_6c (*(float *)(albw_frame + 0x4))
  #define local_68 (*(float *)(albw_frame + 0x8))
  #define local_64 (*(undefined4 *)(albw_frame + 0xc))
  #define afStack_60 ((float *)(albw_frame + 0x10))
  #define local_30 (*(float *)(albw_frame + 0x40))
  #define fStack_2c (*(float *)(albw_frame + 0x44))
  #define local_28 (*(float *)(albw_frame + 0x48))
  #define local_24 (*(uint *)(albw_frame + 0x4c))
  #define local_20 (*(int *)(albw_frame + 0x50))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x54))
  func_004FC07C(param_1,6,0xffffffff,0);
  if (*(int *)(param_1 + 0x960) != 0) {
    func_002228D0(*(int *)(param_1 + 0x960),6,0xffffffff);
  }
  *(undefined1 *)(param_1 + 0x9ae) = 1;
  func_0015D0E0(param_1);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffff8;
  *(undefined4 *)(param_1 + 0xe04) = 0xffffffff;
  *(int *)(param_1 + 0xe0c) = *(int *)(param_1 + 0xe0c) + 1;
  *(undefined1 *)(param_1 + 0xdf1) = 0;
  uVar1 = func_0054FBC4(param_1 + 0x9b4,(float *)(param_1 + 0x3d0),(float *)0x0);
  pfVar2 = (float *)func_0054FA10(param_1 + 0x9b4,uVar1);
  local_30 = *pfVar2;
  fStack_2c = pfVar2[1];
  piVar4 = (int *)(param_1 + 0xe10);
  local_28 = pfVar2[2];
  if (*(int *)(param_1 + 0x344) == 0) {
    *piVar4 = 0;
    *(undefined4 *)(param_1 + 0xe14) = 0;
  }
  else {
    iVar3 = *piVar4;
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == *(int *)(param_1 + 0xe14))) {
      func_00110848(iVar3);
    }
    func_004A1B9C(&local_70,*(int *)(param_1 + 0x344),(uint *)s_AfterImage_0015d400);
    *piVar4 = local_70;
    *(float *)(param_1 + 0xe14) = local_6c;
    if (*(int *)(param_1 + 0xe10) != 0) {
      local_20 = func_0068C690(&local_30);
      uStack_1c = 0;
      local_24 = 0;
      local_6c = *(float *)(param_1 + 0x988);
      local_68 = DAT_0015d40c;
      if ((*(ushort *)(param_1 + 0x2e) & 0xff) != 0) {
        local_68 = DAT_0015d410;
      }
      local_68 = local_68 + *(float *)(param_1 + 0xc);
      local_64 = *(undefined4 *)(param_1 + 0x990);
      func_0049216C(afStack_60,&local_24,&local_6c);
      iVar3 = *(int *)(param_1 + 0xe10);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == *(int *)(param_1 + 0xe14))) {
        func_004A2D1C(iVar3,afStack_60);
      }
    }
  }
  return;
}

