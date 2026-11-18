#include "ghidra_types.h"

extern int func_00167E44(undefined4 param_1,undefined4 *param_2,byte *param_3,uint param_4,int param_5, int param_6);
extern int *DAT_00488be0;
extern int DAT_00488be4;
extern undefined DAT_00488be8;

// USA 00488AE4 <- EU 00488ABC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int
// GLOBAL DAT_00488be0 int *
// GLOBAL DAT_00488be4 int
// GLOBAL DAT_00488be8 undefined

void func_00488AE4(undefined4 param_1,undefined4 *param_2,byte *param_3,uint param_4,int param_5,
                  int param_6)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(int *)(albw_frame + 0xc))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define puStack_30 (*(undefined4 * *)(albw_frame + 0x20))
  #define pbStack_2c (*(byte * *)(albw_frame + 0x24))
  #define local_28 (*(uint *)(albw_frame + 0x28))
  piVar3 = DAT_00488be0;
  local_48 = DAT_00488be4;
  local_44 = param_5 + 0x80;
  uStack_34 = param_1;
  puStack_30 = param_2;
  pbStack_2c = param_3;
  local_28 = param_4;
  (**(code **)(*DAT_00488be0 + 8))(DAT_00488be0);
  (**(code **)(*piVar3 + 8))(piVar3);
  iVar4 = piVar3[1];
  (**(code **)(local_48 + 8))(&local_48);
  if (iVar4 != local_44) {
    iVar4 = 0;
    do {
      cVar1 = *(char *)(piVar3[1] + iVar4);
      if ((cVar1 == '\0') && (*(char *)(local_44 + iVar4) == '\0')) break;
      if ((cVar1 == '\0') ||
         ((*(char *)(local_44 + iVar4) == '\0' || (cVar1 != *(char *)(local_44 + iVar4))))) {
        bVar2 = false;
        goto LAB_00488b98;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x40000);
  }
  bVar2 = true;
LAB_00488b98:
  if (bVar2) {
    param_2[2] = 0xb4;
    *param_2 = &DAT_00488be8;
    param_2[1] = 0;
  }
  else {
    func_00167E44(param_1,param_2,param_3,local_28,param_5,param_6);
  }
  return;
}

