#include "ghidra_types.h"

extern undefined8 func_001163A0(uint *param_1,uint *param_2,uint param_3);
extern int func_0041343C(int param_1,uint param_2,undefined4 param_3);
extern int func_00413470(int param_1);
extern int func_004134E4(int *param_1,int *param_2,int param_3);
extern int func_00569AB8(int param_1,uint param_2,undefined4 *param_3);
extern int func_0056ACF4(int param_1);
extern int func_0056C9A4(int *param_1,uint param_2);
extern int func_0056CA3C(int *param_1);
extern undefined4 *DAT_00411fc8;

// USA 00411EB4 <- EU 00411E94 (Ghidra, non-matching)
// GLOBAL DAT_00411fc8 undefined4 *

void func_00411EB4(int *param_1,uint param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(uint *)(albw_frame + 0xc))
  #define local_40 (*(char *)(albw_frame + 0x10))
  #define aiStack_38 ((int *)(albw_frame + 0x18))
  #define aiStack_28 ((int *)(albw_frame + 0x28))
  local_40 = '\0';
  local_48 = 0xffffffff;
  bVar2 = func_00569AB8(param_1[1],param_2,&local_48);
  cVar1 = '\0';
  if (bVar2) {
    cVar1 = local_40;
  }
  if (bVar2 && cVar1 != '\0') {
    puVar3 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,local_48);
    func_004134E4(aiStack_38,(int *)puVar3,0);
    iVar4 = func_0056CA3C(aiStack_38);
    if (iVar4 == 0) {
      uVar5 = func_0056ACF4((int)puVar3);
      puVar6 = (uint *)(**(code **)(*param_3 + 8))(param_3,uVar5 + local_44 * 4 + 4);
      if (puVar6 != (uint *)0x0) {
        func_001163A0(puVar6,puVar3,uVar5);
        *(undefined4 *)((int)puVar6 + uVar5) = *DAT_00411fc8;
        func_004134E4(aiStack_28,(int *)puVar6,1);
        func_00413470((int)aiStack_28);
        uVar5 = 0;
        if (local_44 != 0) {
          do {
            iVar4 = func_0056C9A4(aiStack_38,uVar5);
            func_0041343C((int)aiStack_28,uVar5,iVar4);
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_44);
        }
        (**(code **)(*param_1 + 8))(param_1,local_48,puVar6);
      }
    }
  }
  return;
}

