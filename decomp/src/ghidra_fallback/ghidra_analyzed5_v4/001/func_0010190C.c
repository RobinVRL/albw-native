#include "ghidra_types.h"

extern int func_00102A18(void);
extern int func_00102A4C(void);
extern int func_00102A5C(void);
extern int func_00102A7C(void *param_1);
extern int func_00102A8C(void);
extern int func_00102AF0(void);
extern int func_00102B94(void *param_1);
extern int func_00102BA4(void);
extern int func_00102BF0(void *param_1);
extern int func_00102C40(uint param_1,int param_2,int param_3);
extern int func_00102FB4(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_00103004(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_00103128(void);
extern int func_0010584C(byte param_1);
extern int func_0010586C(byte param_1);
extern int func_00105C24(void);
extern int func_0010873C(uint param_1,undefined4 param_2);
extern int func_00108B98(void);
extern int func_00108DF8(void);
extern int func_00108F4C(void);
extern int DAT_00101a68;
extern int DAT_00101a6c;

// USA 0010190C <- EU 0010190C (Ghidra, non-matching)
// GLOBAL DAT_00101a68 int
// GLOBAL DAT_00101a6c int

int func_0010190C(undefined4 param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(uint *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  iVar2 = DAT_00101a6c;
  if (*(char *)(DAT_00101a68 + 2) == '\0') {
    *(undefined1 *)(DAT_00101a68 + 2) = 1;
    func_00103128();
    local_20 = 0;
    iVar2 = func_00103004(&local_20,param_2,&uStack_18,&local_1c);
    if (-1 < iVar2) {
      func_00102BF0(local_20);
      func_0010584C((byte)local_1c & 1);
      func_0010586C((char)((local_1c & 2) >> 1));
      func_00102BA4();
      func_00102B94(param_1);
      func_00102A7C(uStack_18);
      bVar1 = func_00102A5C();
      if (!bVar1) {
        func_00108DF8();
        func_00105C24();
        local_20 = 0;
        local_1c = 0;
        uVar3 = func_00102A4C();
        uVar4 = func_00108B98();
        uVar5 = func_00102FB4(uVar4,uVar3,&local_1c,&local_20);
        if ((int)uVar5 < 0) {
          func_0010873C(uVar5,0x101a1c);
        }
        func_00102AF0();
        func_00102C40(param_3,local_20,local_1c);
        func_00108F4C();
        bVar1 = func_00102A8C();
        if (!bVar1) {
          func_00102A18();
        }
      }
      return 0;
    }
    func_00102BA4();
  }
  return iVar2;
}

