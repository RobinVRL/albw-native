#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_003AD0E4(int param_1,undefined4 param_2);
extern void func_0051D0B0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float fparam_0);
extern undefined4 func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int func_0068C690(float *param_1);
extern int *DAT_002f5a04;
extern uint DAT_002f5a08;

// USA 002F5924 <- EU 002F5900 (Ghidra, non-matching)
// GLOBAL DAT_002f5a04 int *
// GLOBAL DAT_002f5a08 uint

undefined4 func_002F5924(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  ulonglong uVar6;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 ((int *)(albw_frame + 0x8))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x18))
  #define afStack_34 ((float *)(albw_frame + 0x2c))
  local_50 = *(float *)(param_2 + 0x3d0);
  uStack_4c = *(undefined4 *)(param_2 + 0x3d4);
  uStack_48 = *(undefined4 *)(param_2 + 0x3d8);
  func_00115C70(afStack_34,(float *)(param_1 + 0xe30),&local_50);
  iVar2 = func_0068C690(afStack_34);
  iVar3 = 0;
  uVar6 = (ulonglong)DAT_002f5a08;
  iVar4 = *DAT_002f5a04;
  do {
    local_58[0] = 0;
    fVar5 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    func_0051D0B0(local_58,-iVar4,iVar4,fVar5 * ALBW_AS_F32(uVar6));
    local_58[0] = local_58[0] + iVar2;
    func_003AD0E4(param_2,local_58[0]);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  cVar1 = *(char *)(param_1 + 0x8cc);
  if ((cVar1 != '\x0e' && cVar1 != '\x0f') && cVar1 != '\x10') {
    if ((cVar1 == '\x11' || cVar1 == '\x12') ||
       ((cVar1 == '!' &&
        (*(char *)(param_1 + 0x8cd) == '\x11' || *(char *)(param_1 + 0x8cd) == '\x12')))) {
      *(undefined1 *)(param_1 + 0xd3d) = 1;
    }
    return 0;
  }
  return func_006640EC((undefined4 *)(param_1 + 0x8c8),10,fVar5);
}

