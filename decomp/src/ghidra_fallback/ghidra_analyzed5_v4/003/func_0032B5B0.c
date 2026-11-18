#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_0036F2A0(byte *param_1,undefined4 param_2);
extern undefined8 func_0058AB74(int param_1);
extern int func_00665670(undefined4 *param_1,undefined1 param_2);
extern int DAT_0032b6a0;
extern uint *DAT_0032b6a4;
extern char s_SE_BlackShueyes_BODY_ATTACK_0032b684[];

// USA 0032B5B0 <- EU 0032B58C (Ghidra, non-matching)
// GLOBAL DAT_0032b6a0 int
// GLOBAL DAT_0032b6a4 uint *
// GLOBAL s_SE_BlackShueyes_BODY_ATTACK_0032b684 string

void func_0032B5B0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_10 = DAT_0032b6a0;
  local_c = s_SE_BlackShueyes_BODY_ATTACK_0032b684;
  func_001507D8(param_1,&local_10,0);
  puVar1 = DAT_0032b6a4;
  if (*(int *)(param_1 + 0xc3c) < (int)*DAT_0032b6a4) {
    uVar2 = *(int *)(param_1 + 0xc3c) + DAT_0032b6a4[1];
    *(uint *)(param_1 + 0xc3c) = uVar2;
    if (*puVar1 <= uVar2) {
      *(uint *)(param_1 + 0xc3c) = *puVar1;
      func_0036F2A0((byte *)(param_1 + 0x8f8),*(undefined4 *)(param_1 + 0x8c4));
      func_0036F2A0((byte *)(param_1 + 0x9d0),*(undefined4 *)(param_1 + 0x99c));
    }
  }
  else if (((*(char *)(param_1 + 0x963) == '\0') || (*(char *)(param_1 + 0x964) != '\0')) &&
          ((*(char *)(param_1 + 0xa3b) == '\0' || (*(char *)(param_1 + 0xa3c) != '\0')))) {
    func_00665670((undefined4 *)(param_1 + 0xba8),8);
  }
  uVar3 = func_0058AB74(param_1);
  if ((int)uVar3 == 0xc) {
    *(int *)(param_1 + 1000) = *(int *)(param_1 + 0xc3c) + *(int *)(param_1 + 1000);
  }
  return;
}

