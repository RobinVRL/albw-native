#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_0020B768(uint param_1);
extern int func_004F4A68();
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_0020eb10;
extern int *DAT_0020eb14;
extern int *DAT_0020eb18;
extern int *DAT_0020eb1c;
extern float DAT_0020eb20;

// USA 0020E970 <- EU 0020E970 (Ghidra, non-matching)
// GLOBAL DAT_0020eb10 int *
// GLOBAL DAT_0020eb14 int *
// GLOBAL DAT_0020eb18 int *
// GLOBAL DAT_0020eb1c int *
// GLOBAL DAT_0020eb20 float

undefined4 func_0020E970(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  bool bVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  if (((*(char *)(param_1 + 0xba4) != '\0') || ((*(ushort *)(param_2 + 0x20) & 0x7e0) != 0x1c0)) ||
     ((uVar1 = *(ushort *)(param_2 + 0x20) & 0x1f, uVar1 != 1 && (uVar1 != 4)))) {
    uVar5 = 0;
    iVar2 = func_0052FBA0(*DAT_0020eb10 + 0x3dbbc,*(uint *)(param_2 + 0x28));
    if (iVar2 != 0) {
      iVar3 = func_00588BE4(iVar2);
      if (iVar3 == *DAT_0020eb14) {
        return 0;
      }
      iVar3 = func_00588BE4(iVar2);
      if (iVar3 == *DAT_0020eb18) {
        uVar5 = 1;
        func_0020B768(*(uint *)(param_2 + 0x28));
        if (*(char *)(param_1 + 0xba4) == '\0') {
          return 0;
        }
        if ((*(ushort *)(param_2 + 0x20) & 0x1f) != 3) {
          return 0;
        }
      }
      else {
        iVar2 = func_00588BE4(iVar2);
        if (iVar2 == *DAT_0020eb1c) {
          return 0;
        }
      }
    }
    iVar2 = func_004F4A68(param_1,param_2);
    local_24 = DAT_0020eb20;
    if (iVar2 != 0) {
      bVar6 = false;
      if (*(float *)(param_2 + 4) == DAT_0020eb20) {
        bVar6 = *(float *)(param_2 + 0xc) == DAT_0020eb20;
      }
      if (!bVar6) {
        local_28 = *(float *)(param_2 + 4);
        uVar4 = *(undefined4 *)(param_2 + 8);
        local_20 = *(undefined4 *)(param_2 + 0xc);
        if (*(char *)(param_1 + 0x8c0) == '\x16') {
          *(float *)(param_1 + 0xcec) = local_28;
          *(undefined4 *)(param_1 + 0xcf0) = uVar4;
          *(undefined4 *)(param_1 + 0xcf4) = local_20;
          *(undefined4 *)(param_1 + 0xcf8) = *(undefined4 *)(param_2 + 0x10);
          *(undefined4 *)(param_1 + 0xcfc) = *(undefined4 *)(param_2 + 0x14);
          *(undefined4 *)(param_1 + 0xd00) = *(undefined4 *)(param_2 + 0x18);
          *(undefined1 *)(param_1 + 0xd04) = uVar5;
        }
        func_00115DC8(&local_28);
        func_00115C54((float *)(param_1 + 0x984),(float *)(param_1 + 0x984),&local_28);
        *(undefined1 *)(param_1 + 0x990) = 1;
      }
      return 1;
    }
  }
  return 0;
}

