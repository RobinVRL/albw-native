/* USA 0068828C: task factory of the "FaderNone" task (0x1EC bytes, base task ctor 0048E140 inlined). Returns the new task (r0 on ARM; 0 when the
 * allocation fails). Native fix of the generated Ghidra text: typed void by the round-3 return
 * classes, so the factory returned garbage (createTask_ 0049D3D8 wrote through it).
 * Rest unchanged. Confidence: high. */
#include "ghidra_types.h"

extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0048E140(int param_1,int *param_2,int param_3);
extern int DAT_006882d8;
extern undefined4 DAT_006882dc;
extern char s_FaderNone_006882cc[];

// USA 0068828C <- EU 00688264 (Ghidra, non-matching)
// GLOBAL DAT_006882d8 int
// GLOBAL DAT_006882dc undefined4
// GLOBAL s_FaderNone_006882cc string

int func_0068828C(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar1 = func_0010CF28(0x1ec,*(int **)(*param_1 + *(int *)(*param_1 + 0x14) * 4),4);
  if (iVar1 != 0) {
    iStack_18 = DAT_006882d8;
    local_14 = s_FaderNone_006882cc;
    (**(code **)(DAT_006882d8 + 8))(&iStack_18);
    puVar2 = func_0048E140(iVar1,param_1,(int)local_14);
    *puVar2 = DAT_006882dc;
    return (int)puVar2;
  }
  return 0;
}
