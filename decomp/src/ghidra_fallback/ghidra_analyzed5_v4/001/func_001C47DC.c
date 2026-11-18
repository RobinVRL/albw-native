#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001C4388(int param_1,undefined1 param_2);
extern int func_004102BC(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00588BF0(int param_1,int param_2);
extern uint DAT_001c48e0;
extern uint DAT_001c48e4;
extern uint DAT_001c48e8;
extern int *DAT_001c48ec;

// USA 001C47DC <- EU 001C47DC (Ghidra, non-matching)
// GLOBAL DAT_001c48e0 uint
// GLOBAL DAT_001c48e4 uint
// GLOBAL DAT_001c48e8 uint
// GLOBAL DAT_001c48ec int *

/* WARNING: Variable defined which should be unmapped: objStack_10 */

undefined4 func_001C47DC(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define objStack_10 ((uint *)(albw_frame + 0x0))
  objStack_10[0] = 0;
  objStack_10[1] = 0;
  func_0014E2A0((int)param_1,param_1[0x10d],param_1 + 0x10f,DAT_001c48e0,0,0);
  if (((char)param_1[0x103] == '\x01') && (bVar2 = func_00588BF0((int)param_1,0), !bVar2)) {
    func_001C4388((int)param_1,0);
  }
  if ((uint)param_1[0x104] < (uint)param_1[0x105]) {
    param_1[0x104] = param_1[0x104] + 1;
  }
  cVar1 = (char)param_1[0x103];
  bVar2 = cVar1 == '\x01';
  if (bVar2) {
    cVar1 = *(char *)((int)param_1 + 0x40d);
  }
  if ((bVar2 && cVar1 == '\x02') && (bVar2 = func_00588BF0((int)param_1,1), !bVar2)) {
    if ((uint)param_1[0x107] < (uint)param_1[0x108]) {
      iVar3 = param_1[0x107] + 1;
      iVar4 = param_1[0x108] - iVar3;
      param_1[0x107] = iVar3;
      iVar3 = *(int *)(*DAT_001c48ec + 0x40);
      uVar5 = *(undefined4 *)(iVar3 + 0x7c);
      piVar6 = *(int **)(iVar3 + 0x80);
      *(undefined4 *)(iVar3 + 0x78) = uVar5;
      if ((int)piVar6 <= iVar4) {
        return 0;
      }
      *(int *)(iVar3 + 0x80) = iVar4;
      if (0x3c < iVar4) {
        if (0xb4 < iVar4) {
          return func_004102BC(3,0,uVar5,piVar6);
        }
        return func_004102BC(3,1,uVar5,piVar6);
      }
      return func_004102BC(3,2,uVar5,piVar6);
    }
    func_001C4388((int)param_1,0);
    objStack_10[1] = DAT_001c48e4;
    objStack_10[0] = DAT_001c48e8;
    func_00150A84(param_1,(int *)objStack_10,0);
  }
  return 0;
}

