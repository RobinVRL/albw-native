/* USA 0049A778 (EU 0049A750): sead::ResourceMgr load: builds a FileDevice::LoadArg on the stack
 * (local_38) and loads through the given device (00489F08 tryLoad) or the FileDeviceMgr
 * (0048E4B4), then resource->doCreate_(data, size, heap) (vtable +0x18). Native fix of the
 * generated Ghidra text: the device call lost its LoadArg argument (r1 = sp at EU 0049A810) and
 * the doCreate_ call lost r1-r3. Rest unchanged. Confidence: high. */
#include "ghidra_types.h"

extern int func_00489F08();
extern int func_0048E4B4(int param_1,int *param_2);
extern int DAT_0049a8b8;
extern undefined4 DAT_0049a8bc;
extern int *DAT_0049a8c0;

// USA 0049A778 <- EU 0049A750 (Ghidra, non-matching)
// GLOBAL DAT_0049a8b8 int
// GLOBAL DAT_0049a8bc undefined4
// GLOBAL DAT_0049a8c0 int *

int * func_0049A778(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(undefined4 *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(int *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(int *)(albw_frame + 0x24))
  #define local_18 (*(int *)(albw_frame + 0x28))
  #define local_14 (*(char *)(albw_frame + 0x2c))
  piVar1 = (int *)(**(code **)(*param_1 + 0x1c))
                            (param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  if (piVar1 != (int *)0x0) {
    local_38 = DAT_0049a8b8;
    local_24 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = '\0';
    local_34 = *(undefined4 *)(param_2 + 4);
    local_30 = *(undefined4 *)(param_2 + 0x18);
    local_2c = *(undefined4 *)(param_2 + 0x1c);
    local_28 = *(undefined4 *)(param_2 + 0xc);
    local_20 = *(undefined4 *)(param_2 + 0x28);
    iVar3 = *(int *)(param_2 + 0x14);
    if (*(int *)(param_2 + 0x14) == 0) {
      if (*(int *)(param_2 + 0x10) < 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = 1;
      }
      iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
      iVar3 = iVar3 * iVar2;
    }
    local_24 = iVar3;
    if (*(int **)(param_2 + 0x24) == (int *)0x0) {
      iVar3 = func_0048E4B4(*DAT_0049a8c0,&local_38);
    }
    else {
      iVar3 = func_00489F08(*(int **)(param_2 + 0x24),&local_38);  /* r1 = sp = the LoadArg */
    }
    if (iVar3 != 0) {
      if (piVar1[5] == 0) {
        piVar1[5] = iVar3;
        piVar1[6] = local_1c;
        piVar1[7] = local_18;
        if (local_14 == '\0') {
          uVar4 = piVar1[8] & 0xfffffffe;
        }
        else {
          uVar4 = piVar1[8] | 1;
        }
        piVar1[8] = uVar4;
        (**(code **)(*piVar1 + 0x18))(piVar1,iVar3,local_1c,*(undefined4 *)(param_2 + 8));  /* doCreate_(data, size, heap): r1-r3 at EU 0049A838..0049A848 */
      }
      return piVar1;
    }
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  return (int *)0x0;
}

