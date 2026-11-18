#include "ghidra_types.h"

extern int func_003C7B94(void);
extern int func_003C7EEC(uint param_1);
extern int func_003D225C(int param_1);
extern int func_003D2330(undefined4 param_1,undefined4 param_2);
extern int DAT_00564000;
extern int DAT_00564004;
extern int DAT_00564008;

// USA 00563F64 <- EU 00563F3C (Ghidra, non-matching)
// GLOBAL DAT_00564000 int
// GLOBAL DAT_00564004 int
// GLOBAL DAT_00564008 int

int func_00563F64(int *param_1)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((ushort *)(albw_frame + 0x8))
  iVar3 = (**(code **)(*param_1 + 0x2c))(param_1,local_18,2,1,0,0);
  if ((-1 < iVar3) && (iVar4 = func_003D2330(0x36c0,4), iVar3 = DAT_00564000, iVar4 != 0)) {
    bVar2 = func_003C7B94();
    if (!bVar2) {
      func_003D225C(iVar4);
      return DAT_00564008;
    }
    iVar5 = func_003C7EEC(iVar4);
    iVar3 = DAT_00564004;
    if (-1 < iVar5) {
      uVar1 = *(ushort *)(iVar4 + 0x202c);
      func_003D225C(iVar4);
      if (uVar1 <= local_18[0]) {
        iVar3 = 0;
      }
      return iVar3;
    }
    func_003D225C(iVar4);
  }
  return iVar3;
}

