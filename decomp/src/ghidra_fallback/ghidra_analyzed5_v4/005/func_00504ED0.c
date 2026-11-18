#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010E0E0(int *param_1);
extern int func_0010E15C(int *param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0010EEE0(int param_1);
extern int func_003E35DC(undefined4 param_1,undefined4 param_2);
extern int func_00580FEC(int param_1);
extern int func_0058FA5C();
extern int func_0058FAAC(undefined4 param_1,undefined4 param_2);
extern int func_005FF398(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_005FF418(uint param_1,undefined4 param_2,uint param_3);
extern int func_005FF7F0(int param_1);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern int func_00600624(void);
extern int func_00600634(int param_1);
extern int func_00601390(void);
extern int func_006013F0(int param_1);
extern int func_00601600(undefined4 param_1);
extern int DAT_00505058;
extern int *DAT_0050505c;
extern int *DAT_00505060;
extern undefined4 DAT_00505064;
extern undefined4 *DAT_00505068;

// USA 00504ED0 <- EU 00504EA8 (Ghidra, non-matching)
// GLOBAL DAT_00505058 int
// GLOBAL DAT_0050505c int *
// GLOBAL DAT_00505060 int *
// GLOBAL DAT_00505064 undefined4
// GLOBAL DAT_00505068 undefined4 *

undefined4 func_00504ED0(uint *param_1,uint param_2,uint param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(uint * *)(albw_frame + 0x0))
  #define local_28 (*(int *)(albw_frame + 0x8))
  iVar6 = DAT_00505058;
  if ((param_2 + 0xe1000000 < 0x600000) && (param_3 != 0)) {
    iVar5 = *(int *)(DAT_00505058 + 8) + 0xfc;
    uVar9 = param_3;
    func_0010C0B8(iVar5);
    iVar6 = *(int *)(iVar6 + 8) + 0xb8;
    local_30 = param_1;
    if ((uint *)0x7fffffe < param_1 + -0x5000000 && param_1 != (uint *)0x1bffffff) {
      local_30 = (uint *)func_0058FAAC(param_3,0x10);
      uVar9 = param_3;
      func_0010E3C4(local_30,param_1,param_3);
    }
    func_003E35DC(local_30,param_3);
    iVar10 = *(int *)(*DAT_0050505c + 0x1c);
    bVar3 = func_00580FEC(*DAT_00505060);
    bVar1 = false;
    if (bVar3) {
      func_005FF418(*(uint *)(iVar10 + (1 - *(int *)(iVar10 + 0x148)) * 4 + 0x128),extraout_r1,uVar9
                   );
      func_006003D8(DAT_00505064,&local_28);
      if (local_28 == 1) {
        bVar1 = true;
        func_00601600(1);
        do {
          cVar4 = func_00600624();
        } while (cVar4 != '\0');
      }
    }
    puVar2 = DAT_00505068;
    func_0010E0E0((int *)*DAT_00505068);
    func_005FF398(iVar6,local_30,param_2,param_3);
    func_006013F0(iVar6);
    do {
      iVar7 = func_00600634(iVar6);
    } while (iVar7 != 0);
    func_005FF7F0(iVar6);
    func_0010E15C((int *)*puVar2);
    if (bVar3) {
      uVar8 = extraout_r1_00;
      if (bVar1) {
        func_005FF418(*(uint *)(iVar10 + (1 - *(int *)(iVar10 + 0x148)) * 4 + 0x128),extraout_r1_00,
                      param_2);
        func_00601390();
        uVar8 = extraout_r1_01;
      }
      func_005FF418(*(uint *)(iVar10 + *(int *)(iVar10 + 0x148) * 4 + 0x128),uVar8,param_2);
    }
    if ((uint *)0x7fffffe < param_1 + -0x5000000 && param_1 != (uint *)0x1bffffff) {
      func_0058FA5C((int)local_30);
    }
    return func_0010EEE0(iVar5);
  }
  return 0;
}

