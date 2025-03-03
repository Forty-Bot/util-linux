
/*
 * No copyright is claimed.  This code is in the public domain; do with
 * it what you wish.
 *
 * Written by Karel Zak <kzak@redhat.com>
 *
 * Probably the most complete list of the GUIDs are at:
 *	 https://wikipedia.org/wiki/GUID_Partition_Table
 *
 * The macro DEF_GUID() has to be defined in your code according to array where
 * you want to include this file.
 */

/* Generic OS */
DEF_GUID("C12A7328-F81F-11D2-BA4B-00A0C93EC93B", N_("EFI System")),

DEF_GUID("024DEE41-33E7-11D3-9D69-0008C781F39F", N_("MBR partition scheme")),
DEF_GUID("D3BFE2DE-3DAF-11DF-BA40-E3A556D89593", N_("Intel Fast Flash")),

/* Hah!IdontneedEFI */
DEF_GUID("21686148-6449-6E6F-744E-656564454649", N_("BIOS boot")),

/* NIH syndrome */
DEF_GUID("F4019732-066E-4E12-8273-346C5641494F", N_("Sony boot partition")),
DEF_GUID("BFBFAFE7-A34F-448A-9A5B-6213EB736C22", N_("Lenovo boot partition")),

/* PowerPC reference platform boot partition */
DEF_GUID("9E1A2D38-C612-4316-AA26-8B49521E5A8B", N_("PowerPC PReP boot")),

/* Open Network Install Environment */
DEF_GUID("7412F7D5-A156-4B13-81DC-867174929325", N_("ONIE boot")),
DEF_GUID("D4E6E2CD-4469-46F3-B5CB-1BFF57AFC149", N_("ONIE config")),

/* Windows */
DEF_GUID("E3C9E316-0B5C-4DB8-817D-F92DF00215AE", N_("Microsoft reserved")),
DEF_GUID("EBD0A0A2-B9E5-4433-87C0-68B6B72699C7", N_("Microsoft basic data")),
DEF_GUID("5808C8AA-7E8F-42E0-85D2-E1E90434CFB3", N_("Microsoft LDM metadata")),
DEF_GUID("AF9B60A0-1431-4F62-BC68-3311714A69AD", N_("Microsoft LDM data")),
DEF_GUID("DE94BBA4-06D1-4D40-A16A-BFD50179D6AC", N_("Windows recovery environment")),
DEF_GUID("37AFFC90-EF7D-4E96-91C3-2D7AE055B174", N_("IBM General Parallel Fs")),
DEF_GUID("E75CAF8F-F680-4CEE-AFA3-B001E56EFC2D", N_("Microsoft Storage Spaces")),

/* HP-UX */
DEF_GUID("75894C1E-3AEB-11D3-B7C1-7B03A0000000", N_("HP-UX data")),
DEF_GUID("E2A1E728-32E3-11D6-A682-7B03A0000000", N_("HP-UX service")),

/* Linux (https://systemd.io/DISCOVERABLE_PARTITIONS/) */
DEF_GUID("0657FD6D-A4AB-43C4-84E5-0933C84B4F4F", N_("Linux swap")),
DEF_GUID("0FC63DAF-8483-4772-8E79-3D69D8477DE4", N_("Linux filesystem")),
DEF_GUID("3B8F8425-20E0-4F3B-907F-1A25A76F98E8", N_("Linux server data")),
DEF_GUID("44479540-F297-41B2-9AF7-D131D5F0458A", N_("Linux root (x86)")),
DEF_GUID("4F68BCE3-E8CD-4DB1-96E7-FBCAF984B709", N_("Linux root (x86-64)")),
DEF_GUID("69DAD710-2CE4-4E3C-B16C-21A1D49ABED3", N_("Linux root (ARM)")),
DEF_GUID("B921B045-1DF0-41C3-AF44-4C6F280D3FAE", N_("Linux root (ARM-64)")),
DEF_GUID("993D8D3D-F80E-4225-855A-9DAF8ED7EA97", N_("Linux root (IA-64)")),
DEF_GUID("77055800-792C-4F94-B39A-98C91B762BB6", N_("Linux root (LoongArch-64)")),
DEF_GUID("60D5A7FE-8E7D-435C-B714-3DD8162144E1", N_("Linux root (RISC-V-32)")),
DEF_GUID("72EC70A6-CF74-40E6-BD49-4BDA08E8F224", N_("Linux root (RISC-V-64)")),
DEF_GUID("8DA63339-0007-60C0-C436-083AC8230908", N_("Linux reserved")),
DEF_GUID("933AC7E1-2EB4-4F13-B844-0E14E2AEF915", N_("Linux home")),
DEF_GUID("A19D880F-05FC-4D3B-A006-743F0F84911E", N_("Linux RAID")),
DEF_GUID("E6D6D379-F507-44C2-A23C-238F2A3DF928", N_("Linux LVM")),
DEF_GUID("4D21B016-B534-45C2-A9FB-5C16E091FD2D", N_("Linux variable data")),
DEF_GUID("7EC6F557-3BC5-4ACA-B293-16EF5DF639D1", N_("Linux temporary data")),
DEF_GUID("75250D76-8CC6-458E-BD66-BD47CC81A812", N_("Linux /usr (x86)")),
DEF_GUID("8484680C-9521-48C6-9C11-B0720656F69E", N_("Linux /usr (x86-64)")),
DEF_GUID("7D0359A3-02B3-4F0A-865C-654403E70625", N_("Linux /usr (ARM)")),
DEF_GUID("B0E01050-EE5F-4390-949A-9101B17104E9", N_("Linux /usr (ARM-64)")),
DEF_GUID("4301D2A6-4E3B-4B2A-BB94-9E0B2C4225EA", N_("Linux /usr (IA-64)")),
DEF_GUID("E611C702-575C-4CBE-9A46-434FA0BF7E3F", N_("Linux /usr (LoongArch-64)")),
DEF_GUID("B933FB22-5C3F-4F91-AF90-E2BB0FA50702", N_("Linux /usr (RISC-V-32)")),
DEF_GUID("BEAEC34B-8442-439B-A40B-984381ED097D", N_("Linux /usr (RISC-V-64)")),
DEF_GUID("D13C5D3B-B5D1-422A-B29F-9454FDC89D76", N_("Linux root verity (x86)")),
DEF_GUID("2C7357ED-EBD2-46D9-AEC1-23D437EC2BF5", N_("Linux root verity (x86-64)")),
DEF_GUID("7386CDF2-203C-47A9-A498-F2ECCE45A2D6", N_("Linux root verity (ARM)")),
DEF_GUID("DF3300CE-D69F-4C92-978C-9BFB0F38D820", N_("Linux root verity (ARM-64)")),
DEF_GUID("86ED10D5-B607-45BB-8957-D350F23D0571", N_("Linux root verity (IA-64)")),
DEF_GUID("F3393B22-E9AF-4613-A948-9D3BFBD0C535", N_("Linux root verity (LoongArch-64)")),
DEF_GUID("AE0253BE-1167-4007-AC68-43926C14C5DE", N_("Linux root verity (RISC-V-32)")),
DEF_GUID("B6ED5582-440B-4209-B8DA-5FF7C419EA3D", N_("Linux root verity (RISC-V-64)")),
DEF_GUID("8F461B0D-14EE-4E81-9AA9-049B6FB97ABD", N_("Linux /usr verity (x86)")),
DEF_GUID("77FF5F63-E7B6-4633-ACF4-1565B864C0E6", N_("Linux /usr verity (x86-64)")),
DEF_GUID("C215D751-7BCD-4649-BE90-6627490A4C05", N_("Linux /usr verity (ARM)")),
DEF_GUID("6E11A4E7-FBCA-4DED-B9E9-E1A512BB664E", N_("Linux /usr verity (ARM-64)")),
DEF_GUID("6A491E03-3BE7-4545-8E38-83320E0EA880", N_("Linux /usr verity (IA-64)")),
DEF_GUID("F46B2C26-59AE-48F0-9106-C50ED47F673D", N_("Linux /usr verity (LoongArch-64)")),
DEF_GUID("CB1EE4E3-8CD0-4136-A0A4-AA61A32E8730", N_("Linux /usr verity (RISC-V-32)")),
DEF_GUID("8F1056BE-9B05-47C4-81D6-BE53128E5B54", N_("Linux /usr verity (RISC-V-64)")),
/* ... too crazy, ignore for now:
DEF_GUID("7FFEC5C9-2D00-49B7-8941-3EA10A5586B7", N_("Linux plain dm-crypt")),
DEF_GUID("CA7D7CCB-63ED-4C53-861C-1742536059CC", N_("Linux LUKS")),
*/
/* Linux https://systemd.io/BOOT_LOADER_SPECIFICATION/ */
DEF_GUID("BC13C2FF-59E6-4262-A352-B275FD6F7172", N_("Linux extended boot")),

/* Linux https://systemd.io/HOME_DIRECTORY/ */
DEF_GUID("773f91ef-66d4-49b5-bd83-d683bf40ad16", N_("Linux user's home")),

/* FreeBSD */
DEF_GUID("516E7CB4-6ECF-11D6-8FF8-00022D09712B", N_("FreeBSD data")),
DEF_GUID("83BD6B9D-7F41-11DC-BE0B-001560B84F0F", N_("FreeBSD boot")),
DEF_GUID("516E7CB5-6ECF-11D6-8FF8-00022D09712B", N_("FreeBSD swap")),
DEF_GUID("516E7CB6-6ECF-11D6-8FF8-00022D09712B", N_("FreeBSD UFS")),
DEF_GUID("516E7CBA-6ECF-11D6-8FF8-00022D09712B", N_("FreeBSD ZFS")),
DEF_GUID("516E7CB8-6ECF-11D6-8FF8-00022D09712B", N_("FreeBSD Vinum")),

/* Apple OSX */
DEF_GUID("48465300-0000-11AA-AA11-00306543ECAC", N_("Apple HFS/HFS+")),
DEF_GUID("7C3457EF-0000-11AA-AA11-00306543ECAC", N_("Apple APFS")),
DEF_GUID("55465300-0000-11AA-AA11-00306543ECAC", N_("Apple UFS")),
DEF_GUID("52414944-0000-11AA-AA11-00306543ECAC", N_("Apple RAID")),
DEF_GUID("52414944-5F4F-11AA-AA11-00306543ECAC", N_("Apple RAID offline")),
DEF_GUID("426F6F74-0000-11AA-AA11-00306543ECAC", N_("Apple boot")),
DEF_GUID("4C616265-6C00-11AA-AA11-00306543ECAC", N_("Apple label")),
DEF_GUID("5265636F-7665-11AA-AA11-00306543ECAC", N_("Apple TV recovery")),
DEF_GUID("53746F72-6167-11AA-AA11-00306543ECAC", N_("Apple Core storage")),

/* Solaris */
DEF_GUID("6A82CB45-1DD2-11B2-99A6-080020736631", N_("Solaris boot")),
DEF_GUID("6A85CF4D-1DD2-11B2-99A6-080020736631", N_("Solaris root")),
/* same as Apple ZFS */
DEF_GUID("6A898CC3-1DD2-11B2-99A6-080020736631", N_("Solaris /usr & Apple ZFS")),
DEF_GUID("6A87C46F-1DD2-11B2-99A6-080020736631", N_("Solaris swap")),
DEF_GUID("6A8B642B-1DD2-11B2-99A6-080020736631", N_("Solaris backup")),
DEF_GUID("6A8EF2E9-1DD2-11B2-99A6-080020736631", N_("Solaris /var")),
DEF_GUID("6A90BA39-1DD2-11B2-99A6-080020736631", N_("Solaris /home")),
DEF_GUID("6A9283A5-1DD2-11B2-99A6-080020736631", N_("Solaris alternate sector")),
DEF_GUID("6A945A3B-1DD2-11B2-99A6-080020736631", N_("Solaris reserved 1")),
DEF_GUID("6A9630D1-1DD2-11B2-99A6-080020736631", N_("Solaris reserved 2")),
DEF_GUID("6A980767-1DD2-11B2-99A6-080020736631", N_("Solaris reserved 3")),
DEF_GUID("6A96237F-1DD2-11B2-99A6-080020736631", N_("Solaris reserved 4")),
DEF_GUID("6A8D2AC7-1DD2-11B2-99A6-080020736631", N_("Solaris reserved 5")),

/* NetBSD */
DEF_GUID("49F48D32-B10E-11DC-B99B-0019D1879648", N_("NetBSD swap")),
DEF_GUID("49F48D5A-B10E-11DC-B99B-0019D1879648", N_("NetBSD FFS")),
DEF_GUID("49F48D82-B10E-11DC-B99B-0019D1879648", N_("NetBSD LFS")),
DEF_GUID("2DB519C4-B10E-11DC-B99B-0019D1879648", N_("NetBSD concatenated")),
DEF_GUID("2DB519EC-B10E-11DC-B99B-0019D1879648", N_("NetBSD encrypted")),
DEF_GUID("49F48DAA-B10E-11DC-B99B-0019D1879648", N_("NetBSD RAID")),

/* ChromeOS */
DEF_GUID("FE3A2A5D-4F32-41A7-B725-ACCC3285A309", N_("ChromeOS kernel")),
DEF_GUID("3CB8E202-3B7E-47DD-8A3C-7FF2A13CFCEC", N_("ChromeOS root fs")),
DEF_GUID("2E0A753D-9E48-43B0-8337-B15192CB1B5E", N_("ChromeOS reserved")),

/* MidnightBSD */
DEF_GUID("85D5E45A-237C-11E1-B4B3-E89A8F7FC3A7", N_("MidnightBSD data")),
DEF_GUID("85D5E45E-237C-11E1-B4B3-E89A8F7FC3A7", N_("MidnightBSD boot")),
DEF_GUID("85D5E45B-237C-11E1-B4B3-E89A8F7FC3A7", N_("MidnightBSD swap")),
DEF_GUID("0394EF8B-237E-11E1-B4B3-E89A8F7FC3A7", N_("MidnightBSD UFS")),
DEF_GUID("85D5E45D-237C-11E1-B4B3-E89A8F7FC3A7", N_("MidnightBSD ZFS")),
DEF_GUID("85D5E45C-237C-11E1-B4B3-E89A8F7FC3A7", N_("MidnightBSD Vinum")),

/* Ceph */
DEF_GUID("45B0969E-9B03-4F30-B4C6-B4B80CEFF106", N_("Ceph Journal")),
DEF_GUID("45B0969E-9B03-4F30-B4C6-5EC00CEFF106", N_("Ceph Encrypted Journal")),
DEF_GUID("4FBD7E29-9D25-41B8-AFD0-062C0CEFF05D", N_("Ceph OSD")),
DEF_GUID("4FBD7E29-9D25-41B8-AFD0-5EC00CEFF05D", N_("Ceph crypt OSD")),
DEF_GUID("89C57F98-2FE5-4DC0-89C1-F3AD0CEFF2BE", N_("Ceph disk in creation")),
DEF_GUID("89C57F98-2FE5-4DC0-89C1-5EC00CEFF2BE", N_("Ceph crypt disk in creation")),

/* VMware */
DEF_GUID("AA31E02A-400F-11DB-9590-000C2911D1B8", N_("VMware VMFS")),
DEF_GUID("9D275380-40AD-11DB-BF97-000C2911D1B8", N_("VMware Diagnostic")),
DEF_GUID("381CFCCC-7288-11E0-92EE-000C2911D0B2", N_("VMware Virtual SAN")),
DEF_GUID("77719A0C-A4A0-11E3-A47E-000C29745A24", N_("VMware Virsto")),
DEF_GUID("9198EFFC-31C0-11DB-8F78-000C2911D1B8", N_("VMware Reserved")),

/* OpenBSD */
DEF_GUID("824CC7A0-36A8-11E3-890A-952519AD3F61", N_("OpenBSD data")),

/* QNX */
DEF_GUID("CEF5A9AD-73BC-4601-89F3-CDEEEEE321A1", N_("QNX6 file system")),

/* Plan 9 */
DEF_GUID("C91818F9-8025-47AF-89D2-F030D7000C2C", N_("Plan 9 partition")),

/* HiFive bootloaders */
DEF_GUID("5B193300-FC78-40CD-8002-E86C45580B47", N_("HiFive FSBL")),
DEF_GUID("2E54B353-1271-4842-806F-E436D6AF6985", N_("HiFive BBL")),

/* Haiku */
DEF_GUID("42465331-3BA3-10F1-802A-4861696B7521", N_("Haiku BFS")),
