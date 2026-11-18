#include "ghidra_types.h"

extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_00466C40(int param_1);
extern int func_004670C4(int param_1,int param_2);
extern int func_00468030(int param_1,uint *param_2,int param_3);
extern int func_00469B14(int param_1);
extern int func_00581C5C(int param_1);
extern int func_00582178(int param_1,int *param_2,int param_3);
extern int *DAT_00466bcc;

// USA 00466B38 <- EU 00466B10 (Ghidra, non-matching)
// GLOBAL DAT_00466bcc int *

undefined4 func_00466B38(int param_1)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  _Alignas(8) unsigned char albw_frame[0x120];
  #define local_120 ((uint *)(albw_frame + 0x0))
  #define auStack_114 ((undefined1 *)(albw_frame + 0xc))
  piVar1 = DAT_00466bcc;
  puVar3 = local_120;
  if ((*DAT_00466bcc != 0) && (iVar2 = func_00581C5C(*DAT_00466bcc), iVar2 != 0)) {
    func_004670C4(param_1,(int)*(char *)(param_1 + 299));
    local_120[0] = 0;
    local_120[1] = 0;
    local_120[2] = 0;
    func_0010B3EC(local_120,0x40,(int)auStack_114);
    iVar2 = func_00582178(*piVar1,(int *)local_120,(int)*(char *)(param_1 + 299));
    if (iVar2 == 0) {
      puVar3 = (uint *)0x0;
    }
    func_00468030(param_1,puVar3,(int)*(char *)(param_1 + 299));
  }
  uVar4 = 0;
  do {
    if (uVar4 < *(uint *)(param_1 + 0x148)) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x150) + uVar4 * 4);
    }
    else {
      iVar2 = 0;
    }
    func_00469B14(iVar2);
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0x21);
  return func_00466C40(param_1);
}

