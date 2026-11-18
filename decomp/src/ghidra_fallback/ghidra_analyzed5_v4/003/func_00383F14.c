#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00383C30(int param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_0058A1F4(int param_1);
extern uint *DAT_00384060;
extern float DAT_00384064;
extern undefined4 DAT_00384068;

// USA 00383F14 <- EU 00383EF0 (Ghidra, non-matching)
// GLOBAL DAT_00384060 uint *
// GLOBAL DAT_00384064 float
// GLOBAL DAT_00384068 undefined4

undefined4 func_00383F14(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  uint *puVar5;
  uint *puVar6;
  int *in_r3;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  uVar1 = func_0058A1F4(*(int *)(param_1 + 0x10));
  puVar6 = DAT_00384060;
  if (uVar1 == 0) {
    iVar3 = *(int *)(param_1 + 0x10);
    puVar5 = (uint *)0x0;
    if ((*(char *)(iVar3 + 0xb34) != '\0') &&
       (((iVar2 = *(int *)(param_1 + 0x6c), iVar2 == 0 ||
         (in_r3 = *(int **)(iVar2 + 0x1c), in_r3 != *(int **)(param_1 + 0x70))) ||
        ((in_r3 = *(int **)(iVar2 + 0x3c), ((uint)in_r3 & 4) == 0 && ((uint)in_r3 & 0x40) == 0 &&
         (((in_r3 = *(int **)(iVar2 + 0x20), in_r3 == (int *)0x0 ||
           (*(int *)(iVar2 + 0x24) != in_r3[3])) || (in_r3 = (int *)in_r3[1], (int)in_r3 < 1))))))))
    {
      if (*(int *)(iVar3 + 0x344) == 0) {
        *(int *)(param_1 + 0x6c) = 0;
        *(undefined4 *)(param_1 + 0x70) = 0;
      }
      else {
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x70))) {
          func_00110848(iVar2);
        }
        func_004A1B9C(&local_20,*(int *)(iVar3 + 0x344),puVar6);
        *(int *)(param_1 + 0x6c) = local_20;
        *(undefined4 *)(param_1 + 0x70) = uStack_1c;
        puVar5 = puVar6;
      }
    }
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xc);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x20) + 0x14) + 8)
    ;
    func_00169A80(*(int **)(param_1 + 0x1c),uVar4,puVar5,in_r3);
    uVar4 = 0;
    func_00168E9C(*(int **)(param_1 + 0x1c),*(int *)(param_1 + 0x14),(int *)0x0);
    func_00169A80(*(int **)(param_1 + 0x20),extraout_r1,uVar4,in_r3);
    func_00168E9C(*(int **)(param_1 + 0x20),*(int *)(param_1 + 0x14),(int *)0x0);
    uVar4 = DAT_00384068;
    fVar7 = *(float *)(*(int *)(param_1 + 0x14) + 0x134);
    fVar7 = fVar7 + (*(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x44) - fVar7) * DAT_00384064
    ;
    *(float *)(*(int *)(param_1 + 0x14) + 0x134) = fVar7;
    *(float *)(*(int *)(param_1 + 0x18) + 0x134) = fVar7;
    *(undefined4 *)(param_1 + 0x40) = uVar4;
    return func_00383C30(param_1);
  }
  return 0;
}

