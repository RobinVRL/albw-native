#include "ghidra_types.h"

extern int func_001512B4(int param_1,float *param_2);
extern int func_00290614(int param_1);
extern int func_002A11DC(int *param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_00520EE4(int param_1);
extern int func_00521078(int param_1);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern int func_00661FE4(undefined4 *param_1,undefined1 param_2);
extern int iRam002a069c;
extern float DAT_002a0680;
extern float DAT_002a0684;
extern float DAT_002a0688;
extern float DAT_002a068c;
extern float DAT_002a0690;
extern int *DAT_002a0694;
extern int DAT_002a0698;

// USA 002A04B4 <- EU 002A0490 (Ghidra, non-matching)
// GLOBAL DAT_002a0680 float
// GLOBAL DAT_002a0684 float
// GLOBAL DAT_002a0688 float
// GLOBAL DAT_002a068c float
// GLOBAL DAT_002a0690 float
// GLOBAL DAT_002a0694 int *
// GLOBAL DAT_002a0698 int
// GLOBAL UNK_002a069c int

void func_002A04B4(int *param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define iStack_24 (*(int *)(albw_frame + 0xc))
  #define iStack_20 (*(int *)(albw_frame + 0x10))
  uVar6 = func_0058AB74((int)param_1);
  if ((int)uVar6 == 2) {
    fVar4 = ALBW_AS_F32(param_1[0xf5]) - ALBW_AS_F32(param_1[3]);
    if (ALBW_AS_F32(param_1[0xf5]) - ALBW_AS_F32(param_1[3]) < DAT_002a0680) {
      fVar4 = DAT_002a0680;
    }
    if ((*(short *)((int)param_1 + 0x90a) == 0) &&
       (((fVar5 = DAT_002a0680, bVar1 = func_00521078((int)param_1), bVar1 ||
         (iVar2 = func_00520EE4((int)param_1), iVar2 != 0)) || ((int)ALBW_AS_U32(fVar4) < DAT_002a0698)))) {
      param_1[0xf7] = (int)ALBW_AS_U32(fVar5);
      param_1[0xf8] = (int)ALBW_AS_U32(fVar5);
      param_1[0xf9] = (int)ALBW_AS_U32(fVar5);
      *(undefined2 *)((int)param_1 + 0x90a) = 1;
      bVar1 = func_00521078((int)param_1);
      if (bVar1) {
        func_002A11DC(param_1);
      }
    }
    iVar2 = func_0058A8F0((int)param_1);
    if (iVar2 != 0) {
      if ((uint)param_1[0x245] <= (uint)param_1[0x244]) {
        *(undefined2 *)((int)param_1 + 0x90a) = 2;
        func_004FABDC((int)param_1,3,0xffffffff,0);
        iVar2 = iRam002a069c;
        param_1[0x245] = 0x3c;
        param_1[0x246] = iVar2;
        param_1[0x244] = 0;
        return;
      }
      param_1[0x244] = param_1[0x244] + 1;
    }
  }
  else {
    iVar2 = func_0058A8F0((int)param_1);
    fVar4 = DAT_002a0684;
    if (iVar2 != 0) {
      param_1[0x167] = param_1[0x167] & 0xffffffcf;
      fVar5 = DAT_002a068c;
      fVar3 = ALBW_AS_F32(param_1[0xf8]) + fVar4;
      if (DAT_002a0688 < ALBW_AS_F32(param_1[0xf8]) + fVar4) {
        fVar3 = DAT_002a0688;
      }
      param_1[0xf8] = (int)ALBW_AS_U32(fVar3);
      param_1[0x259] = param_1[0xf5];
      fVar4 = ALBW_AS_F32(param_1[0xf5]) - ALBW_AS_F32(param_1[3]);
      param_1[0xf4] = param_1[600];
      param_1[0xf6] = param_1[0x25a];
      if (fVar5 < fVar4) {
        fVar4 = fVar5;
      }
      fVar4 = fVar4 * DAT_002a0690;
      if (param_1[599] != 0) {
        local_28 = ALBW_AS_F32(param_1[600]);
        iStack_24 = param_1[0x259];
        iStack_20 = param_1[0x25a];
        func_001512B4(param_1[599],&local_28);
      }
      if ((*DAT_002a0694 != 0) && (0x3f3fffff < (int)ALBW_AS_U32(fVar4))) {
        func_00290614(*DAT_002a0694);
        func_00661FE4(param_1 + 0x24e,9);
      }
    }
  }
  return;
}

