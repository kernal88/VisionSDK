cmd_/home/buildslave/workspace/BinaryRelease/label/x86_64/target/aarch64-none-elf/_build/sysroots/aarch64-none-elf/usr/include/scsi/.install := /bin/bash scripts/headers_install.sh /home/buildslave/workspace/BinaryRelease/label/x86_64/target/aarch64-none-elf/_build/sysroots/aarch64-none-elf/usr/include/scsi ./include/uapi/scsi scsi_bsg_fc.h scsi_netlink.h scsi_netlink_fc.h; /bin/bash scripts/headers_install.sh /home/buildslave/workspace/BinaryRelease/label/x86_64/target/aarch64-none-elf/_build/sysroots/aarch64-none-elf/usr/include/scsi ./include/scsi ; /bin/bash scripts/headers_install.sh /home/buildslave/workspace/BinaryRelease/label/x86_64/target/aarch64-none-elf/_build/sysroots/aarch64-none-elf/usr/include/scsi ./include/generated/uapi/scsi ; for F in ; do echo "\#include <asm-generic/$$F>" > /home/buildslave/workspace/BinaryRelease/label/x86_64/target/aarch64-none-elf/_build/sysroots/aarch64-none-elf/usr/include/scsi/$$F; done; touch /home/buildslave/workspace/BinaryRelease/label/x86_64/target/aarch64-none-elf/_build/sysroots/aarch64-none-elf/usr/include/scsi/.install