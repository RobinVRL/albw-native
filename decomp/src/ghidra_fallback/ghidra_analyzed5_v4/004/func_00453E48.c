#include "ghidra_types.h"

extern int func_00167E44(undefined4 param_1,undefined4 *param_2,byte *param_3,uint param_4,int param_5, int param_6);
extern int func_003B7194(int *param_1,uint param_2);
extern int *DAT_00453fac;
extern uint DAT_00453fb0;
extern int *DAT_00453fb4;
extern undefined DAT_00453fb8;

// USA 00453E48 <- EU 00453E20 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int
// GLOBAL DAT_00453fac int *
// GLOBAL DAT_00453fb0 uint
// GLOBAL DAT_00453fb4 int *
// GLOBAL DAT_00453fb8 undefined

/* WARNING: Variable defined which should be unmapped: objStack_58 */

void func_00453E48(undefined4 param_1,undefined4 *param_2,byte *param_3,uint param_4,int param_5,
                  int param_6)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define objStack_58 ((uint *)(albw_frame + 0x8))
  #define local_50 ((int *)(albw_frame + 0x10))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define puStack_30 (*(undefined4 * *)(albw_frame + 0x30))
  #define pbStack_2c (*(byte * *)(albw_frame + 0x34))
  #define local_28 (*(uint *)(albw_frame + 0x38))
  piVar3 = DAT_00453fac;
  objStack_58[0] = DAT_00453fb0;
  objStack_58[1] = param_5 + 0x80;
  uStack_34 = param_1;
  puStack_30 = param_2;
  pbStack_2c = param_3;
  local_28 = param_4;
  (**(code **)(*DAT_00453fac + 8))(DAT_00453fac);
  (**(code **)(*piVar3 + 8))(piVar3);
  uVar6 = piVar3[1];
  (**(code **)(objStack_58[0] + 8))(objStack_58);
  piVar4 = DAT_00453fb4;
  if (uVar6 != objStack_58[1]) {
    iVar5 = 0;
    do {
      cVar1 = *(char *)(piVar3[1] + iVar5);
      if ((cVar1 == '\0') && (*(char *)(objStack_58[1] + iVar5) == '\0')) break;
      if ((cVar1 == '\0') ||
         ((*(char *)(objStack_58[1] + iVar5) == '\0' || (cVar1 != *(char *)(objStack_58[1] + iVar5))
          ))) {
        bVar2 = false;
        goto LAB_00453f00;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x40000);
  }
  bVar2 = true;
LAB_00453f00:
  if (bVar2) {
    if (*DAT_00453fb4 < 0) {
      uVar6 = 0;
      local_50[0] = 0;
      local_50[1] = 0;
      local_50[3] = 0xffffffff;
      local_50[2] = 0;
      do {
        iVar5 = func_003B7194(local_50,uVar6);
        if (iVar5 != 0) {
          iVar5 = local_50[2] >> 1;
          if (local_50[2] >> 1 < *piVar4) {
            iVar5 = *piVar4;
          }
          *piVar4 = iVar5;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < 0x80);
    }
    *param_2 = &DAT_00453fb8;
    param_2[1] = 0;
    param_2[2] = *piVar4 << 1;
  }
  else {
    objStack_58[0] = param_5;
    objStack_58[1] = param_6;
    func_00167E44(param_1,param_2,param_3,local_28,param_5,param_6);
  }
  return;
}

