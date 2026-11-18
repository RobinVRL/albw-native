#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_00539418(undefined4 param_1,int param_2,undefined4 *param_3);
extern int func_0057EAC0(int param_1);
extern float DAT_003a04f4;
extern float DAT_003a04f8;
extern undefined4 DAT_003a04fc;
extern undefined4 DAT_003a0500;

// USA 003A0464 <- EU 003A0440 (Ghidra, non-matching)
// GLOBAL DAT_003a04f4 float
// GLOBAL DAT_003a04f8 float
// GLOBAL DAT_003a04fc undefined4
// GLOBAL DAT_003a0500 undefined4

undefined4 func_003A0464(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  iVar3 = *(int *)(param_2 + 4);
  func_0057EAC0((int)(param_1 + 0x7c));
  local_14 = ALBW_AS_F32(param_1[0x79]) * DAT_003a04f4;
  if (DAT_003a04f8 <= ALBW_AS_F32(param_1[0x79]) * DAT_003a04f4) {
    local_14 = DAT_003a04f8;
  }
  local_20 = DAT_003a04fc;
  uStack_1c = DAT_003a0500;
  local_18 = DAT_003a04fc;
  func_00539418(param_1,iVar3,&local_20);
  iVar3 = (**(code **)(*param_1 + 100))(param_1);
  iVar2 = param_1[0x7b];
  cVar1 = *(char *)(iVar2 + 0xd);
  if (iVar3 == 0) {
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(iVar2 + 0xe);
    }
    if (bVar4 && cVar1 == '\x03') {
      return func_0012C718(iVar2);
    }
  }
  else {
    bVar4 = cVar1 == '\0';
    if (bVar4) {
      cVar1 = *(char *)(iVar2 + 0xe);
    }
    if (bVar4 && cVar1 == '\0') {
      *(undefined1 *)(iVar2 + 0xe) = 1;
    }
  }
  return 0;
}

