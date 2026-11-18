#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_0031520C(int param_1);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern int func_004CEAF0(int param_1);
extern uint *DAT_003af608;
extern uint *DAT_003af60c;
extern uint *DAT_003af610;
extern int *DAT_003af614;

// USA 003AF488 <- EU 003AF464 (Ghidra, non-matching)
// GLOBAL DAT_003af608 uint *
// GLOBAL DAT_003af60c uint *
// GLOBAL DAT_003af610 uint *
// GLOBAL DAT_003af614 int *

void func_003AF488(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  _Alignas(8) unsigned char albw_frame[0x2e0];
  #define local_2e0 (*(int *)(albw_frame + 0x0))
  #define local_2dc (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_2d8 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_2d4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2c4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2c0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2b6 (*(short *)(albw_frame + 0x2a))
  #define local_298 (*(undefined4 *)(albw_frame + 0x48))
  #define local_294 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x2c0))
  if (*(char *)(param_1 + 0x39) != '\0') {
    iVar2 = *(int *)(param_1 + 0x34);
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    func_001151EC((undefined4 *)(iVar2 + 0x80),
                  (undefined4 *)
                  (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8d4) + 0x24) + 0x14) +
                  *(int *)(*(int *)(param_1 + 4) + 0x8f4) * 0x30));
    func_004CEAF0(*(int *)(param_1 + 0x34));
    if (*(char *)(param_1 + 0x38) != '\0') {
      *(undefined1 *)(param_1 + 0x39) = 0;
      iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8d4) + 0x24) + 0x14) +
              *(int *)(*(int *)(param_1 + 4) + 0x8f4) * 0x30;
      uVar6 = CONCAT44(*(undefined4 *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0xc));
      uVar7 = *(undefined4 *)(iVar2 + 0x2c);
      local_2c0 = 0;
      local_2bc = 0;
      local_2c4 = 0;
      local_298 = 0;
      local_294 = 0;
      local_20 = 0;
      func_002DFF7C(&local_2e0);
      cVar1 = *(char *)(param_1 + 0xc);
      if (cVar1 == '\0') {
        local_2e0 = func_0019B04C(*DAT_003af608);
      }
      else if (cVar1 == '\x01') {
        local_2e0 = func_0019B04C(*DAT_003af60c);
      }
      else if (cVar1 == '\x02') {
        local_2e0 = func_0019B04C(*DAT_003af610);
      }
      local_2dc = (undefined4)uVar6;
      uStack_2d8 = (undefined4)((ulonglong)uVar6 >> 0x20);
      local_2c0 = *(undefined4 *)(*(int *)(param_1 + 4) + 1000);
      local_294 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x2cc);
      local_2b6 = (short)*(char *)(param_1 + 0xc);
      uStack_2d4 = uVar7;
      piVar3 = func_004C4AF4(*DAT_003af614,&local_2e0,0);
      if (piVar3 != (int *)0x0) {
        func_0031520C((int)piVar3);
        iVar2 = *(int *)(param_1 + 0x48);
        iVar4 = *(int *)(param_1 + 0x40);
        iVar5 = piVar3[0xb3];
        if (iVar2 < iVar4) {
          *(int *)(param_1 + 0x48) = iVar2 + 1;
          iVar2 = iVar2 + *(int *)(param_1 + 0x44);
          if (iVar4 <= iVar2) {
            iVar2 = iVar2 - iVar4;
          }
          *(int *)(*(int *)(param_1 + 0x3c) + iVar2 * 4) = iVar5;
        }
      }
    }
  }
  return;
}

