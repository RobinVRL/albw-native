#include "ghidra_types.h"

extern int func_0010BB00(undefined4 *param_1,undefined4 *param_2);
extern int func_003D225C(int param_1);
extern int func_003D2330(undefined4 param_1,undefined4 param_2);
extern uint DAT_003d0274;

// USA 003D0040 <- EU 003D001C (Ghidra, non-matching)
// GLOBAL DAT_003d0274 uint

int func_003D0040(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_2c (*(int *)(albw_frame + 0x4))
  #define local_28 (*(int *)(albw_frame + 0x8))
  if (param_1[1] != 0) {
    local_28 = 0;
    local_2c = 0;
    uVar1 = (**(code **)(*param_1 + 8))(param_1,param_1[1],5,2,&local_2c);
    if (((uVar1 & 0x3ff) != 0x3f7) &&
       (((local_2c != 0 &&
         ((((uVar1 & 0x3fc00) != 0x4400 || ((uVar1 & 0x3ff) < 100)) || (0xb3 < (uVar1 & 0x3ff)))))
        || (iVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_1[1],0,0,0), -1 < iVar2)))) {
      puVar3 = (undefined4 *)func_003D2330(800,4);
      if (puVar3 == (undefined4 *)0x0) {
        param_1[0x158] = 0;
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x34))(param_1,puVar3,local_2c,&local_28,param_1[1],5,0x12);
        if (-1 < iVar2) {
          if (local_28 != 0) {
            func_0010BB00(param_1 + 0x157,puVar3);
          }
          uVar1 = DAT_003d0274;
          if ((*(ushort *)(param_1 + 0x157) == DAT_003d0274) &&
             (param_1[0x158] == local_2c - 8U >> 3)) {
LAB_003d0224:
            uVar1 = 0;
            puVar4 = puVar3;
            if (param_1[0x158] != 0) {
              do {
                puVar4 = puVar4 + 2;
                func_0010BB00(param_1 + uVar1 * 2 + 0x159,puVar4);
                uVar1 = uVar1 + 1;
              } while (uVar1 < (uint)param_1[0x158]);
            }
            func_003D225C((int)puVar3);
            return param_1[0x158];
          }
          iVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_1[1],0,0,0);
          if (-1 < iVar2) {
            iVar2 = (**(code **)(*param_1 + 8))(param_1,param_1[1],5,2,&local_2c);
            if (-1 < iVar2) {
              iVar2 = (**(code **)(*param_1 + 0x34))
                                (param_1,puVar3,local_2c,&local_28,param_1[1],5,0x12);
              if (((-1 < iVar2) &&
                  (func_0010BB00(param_1 + 0x157,puVar3), *(ushort *)(param_1 + 0x157) == uVar1)) &&
                 (param_1[0x158] == local_2c - 8U >> 3)) goto LAB_003d0224;
            }
            param_1[0x158] = 0;
          }
        }
        func_003D225C((int)puVar3);
      }
    }
  }
  return 0;
}

