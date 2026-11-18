#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float fRam00189398;
extern float fRam001893b0;
extern float fRam001893c4;
extern int iRam00189394;
extern undefined4 uRam00189390;
extern undefined4 uRam0018939c;
extern undefined4 DAT_001893c8;
extern char s_cf_001893a0[];
extern char s_cf_001893b4[];
extern char s_cf_001893c7[];
extern char s_cf_001893cc[];

// USA 00189250 <- EU 00189250 (Ghidra, non-matching)
// GLOBAL UNK_00189390 undefined4
// GLOBAL UNK_00189394 int
// GLOBAL UNK_00189398 float
// GLOBAL UNK_0018939c undefined4
// GLOBAL UNK_001893b0 float
// GLOBAL UNK_001893c4 float
// GLOBAL s_cf_001893c7 undefined

void func_00189250(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define iStack_28 (*(int *)(albw_frame + 0x8))
  #define pcStack_24 (*(char * *)(albw_frame + 0xc))
  func_004CF478(*(int *)(param_1 + 0x4f4),1);
  func_00151148(*(int *)(param_1 + 0x52c),1);
  uVar1 = uRam00189390;
  *(undefined4 *)(param_1 + 0x524) = 0xd;
  *(undefined4 *)(param_1 + 0x528) = uVar1;
  *(undefined4 *)(param_1 + 0x520) = 0;
  iVar2 = iRam00189394;
  if (*(char *)(param_1 + 0x6e0) == '\x02') {
    fVar3 = fRam001893b0;
    func_004D80A4((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 1000),
                  *(float *)(param_1 + 0x6dc) * fRam001893b0);
    *(float *)(param_1 + 0x3e0) = *(float *)(param_1 + 0x6dc) * fVar3;
    pcStack_24 = (char *)((int)s_cf_001893b4);
    iStack_28 = iVar2;
    func_00150A84((int *)param_1,&iStack_28,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x6ac) = *(undefined4 *)(param_1 + 0x3d4);
    if (*(char *)(param_1 + 0x6e0) == '\0') {
      func_004D80A4((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 1000),fRam001893c4);
      *(undefined4 *)(param_1 + 0x3e0) = DAT_001893c8;
      pcStack_24 = (char *)((int)s_cf_001893cc);
      iStack_28 = iVar2;
      func_00150A84((int *)param_1,&iStack_28,0);
    }
    else {
      func_004D80A4((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 1000),fRam00189398);
      *(undefined4 *)(param_1 + 0x3e0) = uRam0018939c;
      pcStack_24 = (char *)((int)s_cf_001893a0);
      iStack_28 = iVar2;
      func_00150A84((int *)param_1,&iStack_28,0);
    }
  }
  *(undefined1 *)(param_1 + 0x5d5) = 0;
  *(undefined1 *)(param_1 + 0x639) = 0;
  return;
}

