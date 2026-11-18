#include "ghidra_types.h"

extern int func_0014FAE0(undefined4 *param_1);
extern int func_0014FC2C(undefined4 *param_1,int param_2);
extern int func_0014FF58(undefined4 *param_1,int param_2);

// USA 002ACC88 <- EU 002ACC64 (Ghidra, non-matching)

undefined4 func_002ACC88(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_8 (*(undefined4 *)(albw_frame + 0x8))
  local_10 = *param_1;
  uStack_c = param_1[1];
  uStack_8 = param_1[2];
  bVar2 = *(char *)((int)param_1 + 0x27) != '\0';
  cVar1 = *(char *)(param_1 + 9);
  if (cVar1 == '\0') {
LAB_002accc0:
    if (*(char *)((int)param_1 + 0x25) != '\x01' && bVar2) {
      return func_0014FAE0(&local_10);
    }
  }
  else {
    if (cVar1 != '\x05') {
      if (cVar1 == '\b') goto LAB_002accc0;
      if (cVar1 != '\x10') {
        return 0;
      }
    }
    if (!bVar2) {
      return func_0014FF58(&local_10,(uint)*(byte *)(param_1 + 10));
    }
    func_0014FC2C(&local_10,(uint)*(byte *)(param_1 + 10));
  }
  return 0;
}

