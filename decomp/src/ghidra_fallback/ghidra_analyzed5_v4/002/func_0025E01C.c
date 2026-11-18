#include "ghidra_types.h"

extern int func_0014AA1C(int param_1,char *param_2,int param_3);
extern int *DAT_0025e104;
extern int *DAT_0025e108;
extern undefined4 DAT_0025e10c;

// USA 0025E01C <- EU 0025E044 (Ghidra, non-matching)
// GLOBAL DAT_0025e104 int *
// GLOBAL DAT_0025e108 int *
// GLOBAL DAT_0025e10c undefined4

undefined4 func_0025E01C(void)

{
  char cVar1;
  int iVar2;
  uint unaff_r4;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((char *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  iVar2 = *DAT_0025e104;
  iVar3 = *(int *)(*DAT_0025e108 + 0x14);
  cVar1 = '\0';
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + 0xd76);
  }
  if (iVar3 == 0 || cVar1 == '\0') {
    *(uint *)(iVar2 + 0x1138) = unaff_r4 & 0xffffff00;
    *(undefined4 *)(iVar2 + 0x113c) = 0x28;
    *(undefined4 *)(iVar2 + 0x1140) = 0x10000;
  }
  else {
    *(uint *)(iVar2 + 0x1138) = unaff_r4 & 0xffffff00;
    *(undefined4 *)(iVar2 + 0x113c) = 0x2b;
    *(undefined4 *)(iVar2 + 0x1140) = 0x10000;
  }
  local_18[0] = '\x02';
  local_14 = DAT_0025e10c;
  return func_0014AA1C(iVar2,local_18,5);
}

