#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0026171C(int param_1,float *param_2,uint *param_3,float *param_4);
extern int func_004356B4(int *param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_00549010(int param_1);
extern int func_00672C38(int *param_1);
extern float fRam001aeb74;
extern int DAT_001aeb68;
extern int DAT_001aeb6c;
extern float DAT_001aeb70;

// USA 001AE9E0 <- EU 001AE9E0 (Ghidra, non-matching)
// GLOBAL DAT_001aeb68 int
// GLOBAL DAT_001aeb6c int
// GLOBAL DAT_001aeb70 float
// GLOBAL UNK_001aeb74 float

undefined4 func_001AE9E0(int *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define fStack_28 (*(float *)(albw_frame + 0x8))
  #define fStack_24 (*(float *)(albw_frame + 0xc))
  #define iStack_20 (*(int *)(albw_frame + 0x10))
  #define fStack_1c (*(float *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  func_00672C38(param_1);
  iVar2 = DAT_001aeb68;
  if ((char)param_1[0x263] != '\0') {
    if (param_1[0x266] != 0) {
      if ((char)param_1[0x278] != '\0') {
        fVar3 = ALBW_AS_F32(param_1[0x276]) + ALBW_AS_F32(param_1[0x277]);
        param_1[0x276] = (int)ALBW_AS_U32(fVar3);
        iVar1 = DAT_001aeb6c;
        if (iVar2 < (int)ALBW_AS_U32(fVar3)) {
          if (0x3f800000 < (int)ALBW_AS_U32(fVar3)) {
            fVar3 = DAT_001aeb70;
          }
          param_1[0x276] = (int)ALBW_AS_U32(fVar3);
          iVar2 = *(int *)(param_1[0x266] + 0x18);
          *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
          *(float *)(iVar2 + 0x74) = fVar3;
          *(float *)(iVar2 + 0x78) = fVar3;
          *(float *)(iVar2 + 0x7c) = fVar3;
        }
        else {
          *(undefined1 *)(param_1 + 0x278) = 0;
          param_1[0x276] = iVar1;
        }
      }
      func_004CF478(*(int *)(param_1[0x266] + 0x18),(int)(char)param_1[0x278]);
      func_0026171C(param_1[0x266],(float *)0x0,(uint *)0x0,(float *)0x0);
      if (param_1[0x268] != 0) {
        fStack_28 = ALBW_AS_F32(param_1[0x26b]);
        fStack_24 = ALBW_AS_F32(param_1[0x26c]);
        iStack_20 = param_1[0x26d];
        func_004D7F70(&fStack_28,param_1[0xfa]);
        iVar2 = func_00549010((int)param_1);
        fStack_1c = *(float *)(iVar2 + 0xc);
        uStack_18 = *(undefined4 *)(iVar2 + 0x1c);
        uStack_14 = *(undefined4 *)(iVar2 + 0x2c);
        func_00115C54(&fStack_28,&fStack_28,&fStack_1c);
        fStack_24 = ALBW_AS_F32(param_1[0xf5]) + fRam001aeb74;
        iVar2 = param_1[0x269];
        *(float *)(iVar2 + 4) = fStack_28;
        *(float *)(iVar2 + 8) = fStack_24;
        *(int *)(iVar2 + 0xc) = iStack_20;
        func_004356B4((int *)param_1[0x269]);
      }
    }
    if (param_1[0x267] != 0) {
      return func_0026171C(param_1[0x267],(float *)0x0,(uint *)0x0,(float *)0x0);
    }
  }
  return 0;
}

