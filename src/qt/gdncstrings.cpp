

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED* gdnc_strings[] = {
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "(1 = keep tx meta data e.g. account owner and payment request information, 2 "
                                   "= drop tx meta data)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Allow JSON-RPC connections from specified source. Valid for <ip> are a "
                                   "single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
                                   "a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "An error occurred while setting up the RPC address %s port %u for listening: "
                                   "%s"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Bind to given address and always listen on it. Use [host]:port notation for "
                                   "IPv6"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Bind to given address and whitelist peers connecting to it. Use [host]:port "
                                   "notation for IPv6"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Bind to given address to listen for JSON-RPC connections. Use [host]:port "
                                   "notation for IPv6. This option can be specified multiple times (default: "
                                   "bind to all interfaces)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Cannot obtain a lock on data directory %s. Guardian Core is probably already "
                                   "running."),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Change automatic finalized budget voting behavior. mode=auto: Vote for only "
                                   "exact finalized budget match to my generated budget. (string, default: auto)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Continuously rate-limit free transactions to <n>*1000 bytes per minute "
                                   "(default:%u)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Create new files with system default permissions, instead of umask 077 (only "
                                   "effective with disabled wallet functionality)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Delete all wallet transactions and only recover those parts of the "
                                   "blockchain through -rescan on startup"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Disable all GDNC specific functionality (Masternodes, InstantX, "
                                   "Budgeting) (0-1, default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Distributed under the MIT software license, see the accompanying file "
                                   "COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Enable Instantx, show confirmations for locked transactions (bool, default: "
                                   "%s)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Enable use of automated -------- for funds stored in this wallet (0-1, "
                                   "default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Enter regression test mode, which uses a special chain in which blocks can "
                                   "be solved instantly."),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Error: Listening for incoming connections failed (listen returned error %s)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Error: Unsupported argument -socks found. Setting SOCKS version isn't "
                                   "possible anymore, only SOCKS5 proxies are supported."),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Execute command when a relevant alert is received or we see a really long "
                                   "fork (%s in cmd is replaced by message)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Execute command when a wallet transaction changes (%s in cmd is replaced by "
                                   "TxID)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Execute command when the best block changes (%s in cmd is replaced by block "
                                   "hash)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Fees (in GDNC/Kb) smaller than this are considered zero fee for relaying "
                                   "(default: %s)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Fees (in GDNC/Kb) smaller than this are considered zero fee for transaction "
                                   "creation (default: %s)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Flush database activity from memory pool to disk log every <n> megabytes "
                                   "(default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Found unconfirmed -------- outputs, will wait till they confirm to "
                                   "continue."),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "How thorough the block verification of -checkblocks is (0-4, default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "If paytxfee is not set, include enough fee so transactions begin "
                                   "confirmation on average within n blocks (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "In this mode -genproclimit controls how many blocks are generated "
                                   "immediately."),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
                                   "fee of %s to prevent stuck transactions)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Log transaction priority and fee per kB when mining blocks (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Maintain a full transaction index, used by the getrawtransaction rpc call "
                                   "(default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Maximum size of data in data carrier transactions we relay and mine "
                                   "(default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Maximum total fees to use in a single wallet transaction, setting too low "
                                   "may abort large transactions (default: %s)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Name to construct url for KeePass entry that stores the wallet passphrase"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "-------- uses exact -------- amounts to send funds, you might simply "
                                   "need to anonymize some more coins."),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Output debugging information (default: %u, supplying <category> is optional)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Provide -------- to -------- by infrequently mixing coins on a continual "
                                   "basis (0-100, default: %u, 1=very frequent, high fees, 100=very infrequent, "
                                   "low fees)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
                                   "unless -connect)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Require high priority for relaying free or low-fee transactions (default:%u)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Send trace/debug info to console instead of debug.log file (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
                                   "leave that many cores free, default: %d)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Set the number of threads for coin generation if enabled (-1 = all cores, "
                                   "default: %d)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Show N confirmations for a successfully locked transaction (0-9999, default: "
                                   "%u)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "InstantX requires inputs with at least 6 confirmations, you might need to "
                                   "wait a few minutes and try again."),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "This is a pre-release test build - use at your own risk - do not use for "
                                   "mining or merchant applications"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "This product includes software developed by the OpenSSL Project for use in "
                                   "the OpenSSL Toolkit <https://www.openssl.org/> and cryptographic software "
                                   "written by Eric Young and UPnP software written by Thomas Bernard."),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "To use gdncd, or the -server option to gdnc-qt, you must set an rpcpassword "
                                   "in the configuration file:\n"
                                   "%s\n"
                                   "It is recommended you use the following random password:\n"
                                   "rpcuser=gdncrpc\n"
                                   "rpcpassword=%s\n"
                                   "(you do not need to remember this password)\n"
                                   "The username and password MUST NOT be the same.\n"
                                   "If the file does not exist, create it with owner-readable-only file "
                                   "permissions.\n"
                                   "It is also recommended to set alertnotify so you are notified of problems;\n"
                                   "for example: alertnotify=echo %%s | mail -s \"GDNC Alert\" admin@foo.com\n"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Unable to bind to %s on this computer. Guardian Core is probably already running."),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Unable to locate enough -------- -------- funds for this transaction."),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Unable to locate enough -------- non--------- funds for this "
                                   "transaction that are not equal 10000 GDNC."),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Unable to locate enough funds for this transaction that are not equal 10000 "
                                   "GDNC."),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
                                   "%s)"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Warning: -maxtxfee is set very high! Fees this large could be paid on a "
                                   "single transaction."),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Warning: -paytxfee is set very high! This is the transaction fee you will "
                                   "pay if you send a transaction."),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Warning: Please check that your computer's date and time are correct! If "
                                   "your clock is wrong Guardian Core will not work properly."),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Warning: The network does not appear to fully agree! Some miners appear to "
                                   "be experiencing issues."),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Warning: We do not appear to fully agree with our peers! You may need to "
                                   "upgrade, or other nodes may need to upgrade."),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Warning: error reading wallet.dat! All keys read correctly, but transaction "
                                   "data or address book entries might be missing or incorrect."),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
                                   "wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
                                   "you should restore from a backup."),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Whitelist peers connecting from the given netmask or IP address. Can be "
                                   "specified multiple times."),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "Whitelisted peers cannot be DoS banned and their transactions are always "
                                   "relayed, even if they are already in the mempool, useful e.g. for a gateway"),
    QT_TRANSLATE_NOOP("gdnc-core", ""
                                   "You must specify a masternodeprivkey in the configuration. Please see "
                                   "documentation for help."),
    QT_TRANSLATE_NOOP("gdnc-core", "(47110 could be used only on mainnet)"),
    QT_TRANSLATE_NOOP("gdnc-core", "(default: %s)"),
    QT_TRANSLATE_NOOP("gdnc-core", "(default: 1)"),
    QT_TRANSLATE_NOOP("gdnc-core", "(must be 47110 for mainnet)"),
    QT_TRANSLATE_NOOP("gdnc-core", "<category> can be:\n"),
    QT_TRANSLATE_NOOP("gdnc-core", "Accept command line and JSON-RPC commands"),
    QT_TRANSLATE_NOOP("gdnc-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Accept public REST requests (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Acceptable ciphers (default: %s)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Add a node to connect to and attempt to keep the connection open"),
    QT_TRANSLATE_NOOP("gdnc-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
    QT_TRANSLATE_NOOP("gdnc-core", "Already have that input."),
    QT_TRANSLATE_NOOP("gdnc-core", "Always query for peer addresses via DNS lookup (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Attempt to recover private keys from a corrupt wallet.dat"),
    QT_TRANSLATE_NOOP("gdnc-core", "Block creation options:"),
    QT_TRANSLATE_NOOP("gdnc-core", "Can't denominate: no compatible inputs left."),
    QT_TRANSLATE_NOOP("gdnc-core", "Can't find random Masternode."),
    QT_TRANSLATE_NOOP("gdnc-core", "Can't mix while sync in progress."),
    QT_TRANSLATE_NOOP("gdnc-core", "Cannot downgrade wallet"),
    QT_TRANSLATE_NOOP("gdnc-core", "Cannot resolve -bind address: '%s'"),
    QT_TRANSLATE_NOOP("gdnc-core", "Cannot resolve -externalip address: '%s'"),
    QT_TRANSLATE_NOOP("gdnc-core", "Cannot resolve -whitebind address: '%s'"),
    QT_TRANSLATE_NOOP("gdnc-core", "Cannot write default address"),
    QT_TRANSLATE_NOOP("gdnc-core", "Collateral not valid."),
    QT_TRANSLATE_NOOP("gdnc-core", "Connect only to the specified node(s)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Connect through SOCKS5 proxy"),
    QT_TRANSLATE_NOOP("gdnc-core", "Connect to KeePassHttp on port <port> (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Connect to a node to retrieve peer addresses, and disconnect"),
    QT_TRANSLATE_NOOP("gdnc-core", "Connection options:"),
    QT_TRANSLATE_NOOP("gdnc-core", "Copyright (C) 2009-%i The Bitcoin Core Developers"),
    QT_TRANSLATE_NOOP("gdnc-core", "Copyright (C) 2014-%i The Gdnc and PIVX Core Developers"),
    QT_TRANSLATE_NOOP("gdnc-core", "Copyright (C) 2015-%i The Guardian Core Developers"),
    QT_TRANSLATE_NOOP("gdnc-core", "Corrupted block database detected"),
    QT_TRANSLATE_NOOP("gdnc-core", "Could not parse -rpcbind value %s as network address"),
    QT_TRANSLATE_NOOP("gdnc-core", "Could not parse masternode.conf"),
    QT_TRANSLATE_NOOP("gdnc-core", "Debugging/Testing options:"),
    QT_TRANSLATE_NOOP("gdnc-core", "Disable safemode, override a real safe mode event (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Discover own IP address (default: 1 when listening and no -externalip)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Do not load the wallet and disable wallet RPC calls"),
    QT_TRANSLATE_NOOP("gdnc-core", "Do you want to rebuild the block database now?"),
    QT_TRANSLATE_NOOP("gdnc-core", "Done loading"),
    QT_TRANSLATE_NOOP("gdnc-core", "Enable the client to act as a masternode (0-1, default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Entries are full."),
    QT_TRANSLATE_NOOP("gdnc-core", "Error connecting to Masternode."),
    QT_TRANSLATE_NOOP("gdnc-core", "Error initializing block database"),
    QT_TRANSLATE_NOOP("gdnc-core", "Error initializing wallet database environment %s!"),
    QT_TRANSLATE_NOOP("gdnc-core", "Error loading block database"),
    QT_TRANSLATE_NOOP("gdnc-core", "Error loading wallet.dat"),
    QT_TRANSLATE_NOOP("gdnc-core", "Error loading wallet.dat: Wallet corrupted"),
    QT_TRANSLATE_NOOP("gdnc-core", "Error loading wallet.dat: Wallet requires newer version of Guardian Core"),
    QT_TRANSLATE_NOOP("gdnc-core", "Error opening block database"),
    QT_TRANSLATE_NOOP("gdnc-core", "Error reading from database, shutting down."),
    QT_TRANSLATE_NOOP("gdnc-core", "Error recovering public key."),
    QT_TRANSLATE_NOOP("gdnc-core", "Error"),
    QT_TRANSLATE_NOOP("gdnc-core", "Error: A fatal internal error occured, see debug.log for details"),
    QT_TRANSLATE_NOOP("gdnc-core", "Error: Can't select current -------- inputs"),
    QT_TRANSLATE_NOOP("gdnc-core", "Error: Disk space is low!"),
    QT_TRANSLATE_NOOP("gdnc-core", "Error: Unsupported argument -tor found, use -onion."),
    QT_TRANSLATE_NOOP("gdnc-core", "Error: Wallet locked, unable to create transaction!"),
    QT_TRANSLATE_NOOP("gdnc-core", "Error: You already have pending entries in the -------- pool"),
    QT_TRANSLATE_NOOP("gdnc-core", "Failed to listen on any port. Use -listen=0 if you want this."),
    QT_TRANSLATE_NOOP("gdnc-core", "Failed to read block"),
    QT_TRANSLATE_NOOP("gdnc-core", "Fee (in GDNC/kB) to add to transactions you send (default: %s)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Finalizing transaction."),
    QT_TRANSLATE_NOOP("gdnc-core", "Force safe mode (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Found enough users, signing ( waiting %s )"),
    QT_TRANSLATE_NOOP("gdnc-core", "Found enough users, signing ..."),
    QT_TRANSLATE_NOOP("gdnc-core", "Generate coins (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "How many blocks to check at startup (default: %u, 0 = all)"),
    QT_TRANSLATE_NOOP("gdnc-core", "If <category> is not supplied, output all debugging information."),
    QT_TRANSLATE_NOOP("gdnc-core", "Importing..."),
    QT_TRANSLATE_NOOP("gdnc-core", "Imports blocks from external blk000??.dat file"),
    QT_TRANSLATE_NOOP("gdnc-core", "Include IP addresses in debug output (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Incompatible mode."),
    QT_TRANSLATE_NOOP("gdnc-core", "Incompatible version."),
    QT_TRANSLATE_NOOP("gdnc-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
    QT_TRANSLATE_NOOP("gdnc-core", "Information"),
    QT_TRANSLATE_NOOP("gdnc-core", "Initialization sanity check failed. Guardian Core is shutting down."),
    QT_TRANSLATE_NOOP("gdnc-core", "Input is not valid."),
    QT_TRANSLATE_NOOP("gdnc-core", "Insufficient funds."),
    QT_TRANSLATE_NOOP("gdnc-core", "Invalid -onion address: '%s'"),
    QT_TRANSLATE_NOOP("gdnc-core", "Invalid -proxy address: '%s'"),
    QT_TRANSLATE_NOOP("gdnc-core", "Invalid amount for -maxtxfee=<amount>: '%s'"),
    QT_TRANSLATE_NOOP("gdnc-core", "Invalid amount for -minrelaytxfee=<amount>: '%s'"),
    QT_TRANSLATE_NOOP("gdnc-core", "Invalid amount for -mintxfee=<amount>: '%s'"),
    QT_TRANSLATE_NOOP("gdnc-core", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Invalid amount for -paytxfee=<amount>: '%s'"),
    QT_TRANSLATE_NOOP("gdnc-core", "Invalid amount for -reservebalance=<amount>"),
    QT_TRANSLATE_NOOP("gdnc-core", "Invalid masternodeprivkey. Please see documenation."),
    QT_TRANSLATE_NOOP("gdnc-core", "Invalid netmask specified in -whitelist: '%s'"),
    QT_TRANSLATE_NOOP("gdnc-core", "Invalid port detected in masternode.conf"),
    QT_TRANSLATE_NOOP("gdnc-core", "Invalid private key."),
    QT_TRANSLATE_NOOP("gdnc-core", "Invalid script detected."),
    QT_TRANSLATE_NOOP("gdnc-core", "KeePassHttp id for the established association"),
    QT_TRANSLATE_NOOP("gdnc-core", "KeePassHttp key for AES encrypted communication with KeePass"),
    QT_TRANSLATE_NOOP("gdnc-core", "Keep N GDNC -------- (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Last -------- was too recent."),
    QT_TRANSLATE_NOOP("gdnc-core", "Last successful -------- action was too recent."),
    QT_TRANSLATE_NOOP("gdnc-core", "Limit size of signature cache to <n> entries (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Line: %d"),
    QT_TRANSLATE_NOOP("gdnc-core", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Listen for connections on <port> (default: %u or testnet: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Loading addresses..."),
    QT_TRANSLATE_NOOP("gdnc-core", "Loading block index..."),
    QT_TRANSLATE_NOOP("gdnc-core", "Loading budget cache..."),
    QT_TRANSLATE_NOOP("gdnc-core", "Loading masternode cache..."),
    QT_TRANSLATE_NOOP("gdnc-core", "Loading masternode payment cache..."),
    QT_TRANSLATE_NOOP("gdnc-core", "Loading wallet... (%3.2f %%)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Loading wallet..."),
    QT_TRANSLATE_NOOP("gdnc-core", "Lock is already in place."),
    QT_TRANSLATE_NOOP("gdnc-core", "Lock masternodes from masternode configuration file (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Maintain at most <n> connections to peers (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Masternode options:"),
    QT_TRANSLATE_NOOP("gdnc-core", "Masternode queue is full."),
    QT_TRANSLATE_NOOP("gdnc-core", "Masternode:"),
    QT_TRANSLATE_NOOP("gdnc-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Missing input transaction information."),
    QT_TRANSLATE_NOOP("gdnc-core", "Mixing in progress..."),
    QT_TRANSLATE_NOOP("gdnc-core", "Need to specify a port with -whitebind: '%s'"),
    QT_TRANSLATE_NOOP("gdnc-core", "No Masternodes detected."),
    QT_TRANSLATE_NOOP("gdnc-core", "No compatible Masternode found."),
    QT_TRANSLATE_NOOP("gdnc-core", "No funds detected in need of denominating."),
    QT_TRANSLATE_NOOP("gdnc-core", "No matching denominations found for mixing."),
    QT_TRANSLATE_NOOP("gdnc-core", "Node relay options:"),
    QT_TRANSLATE_NOOP("gdnc-core", "Non-standard public key detected."),
    QT_TRANSLATE_NOOP("gdnc-core", "Not compatible with existing transactions."),
    QT_TRANSLATE_NOOP("gdnc-core", "Not enough file descriptors available."),
    QT_TRANSLATE_NOOP("gdnc-core", "Not in the Masternode list."),
    QT_TRANSLATE_NOOP("gdnc-core", "Number of automatic wallet backups (default: 10)"),
    QT_TRANSLATE_NOOP("gdnc-core", "-------- is idle."),
    QT_TRANSLATE_NOOP("gdnc-core", "-------- options:"),
    QT_TRANSLATE_NOOP("gdnc-core", "-------- request complete:"),
    QT_TRANSLATE_NOOP("gdnc-core", "-------- request incomplete:"),
    QT_TRANSLATE_NOOP("gdnc-core", "Only accept block chain matching built-in checkpoints (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Options:"),
    QT_TRANSLATE_NOOP("gdnc-core", "Password for JSON-RPC connections"),
    QT_TRANSLATE_NOOP("gdnc-core", "Prepend debug output with timestamp (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "RPC SSL options: (see the Bitcoin Wiki for SSL setup instructions)"),
    QT_TRANSLATE_NOOP("gdnc-core", "RPC server options:"),
    QT_TRANSLATE_NOOP("gdnc-core", "RPC support for HTTP persistent connections (default: %d)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Randomly drop 1 of every <n> network messages"),
    QT_TRANSLATE_NOOP("gdnc-core", "Randomly fuzz 1 of every <n> network messages"),
    QT_TRANSLATE_NOOP("gdnc-core", "Rebuild block chain index from current blk000??.dat files"),
    QT_TRANSLATE_NOOP("gdnc-core", "Receive and display P2P network alerts (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Relay and mine data carrier transactions (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Relay non-P2SH multisig (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Rescan the block chain for missing wallet transactions"),
    QT_TRANSLATE_NOOP("gdnc-core", "Rescanning..."),
    QT_TRANSLATE_NOOP("gdnc-core", "Run a thread to flush wallet periodically (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Run in the background as a daemon and accept commands"),
    QT_TRANSLATE_NOOP("gdnc-core", "Send transactions as zero-fee transactions if possible (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Server certificate file (default: %s)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Server private key (default: %s)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Session not complete!"),
    QT_TRANSLATE_NOOP("gdnc-core", "Session timed out."),
    QT_TRANSLATE_NOOP("gdnc-core", "Set database cache size in megabytes (%d to %d, default: %d)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Set external address:port to get to this masternode (example: %s)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Set key pool size to <n> (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Set maximum block size in bytes (default: %d)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Set minimum block size in bytes (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Set the masternode private key"),
    QT_TRANSLATE_NOOP("gdnc-core", "Set the number of threads to service RPC calls (default: %d)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Sets the DB_PRIVATE flag in the wallet db environment (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Show all debugging options (usage: --help -help-debug)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Signing failed."),
    QT_TRANSLATE_NOOP("gdnc-core", "Signing timed out."),
    QT_TRANSLATE_NOOP("gdnc-core", "Signing transaction failed"),
    QT_TRANSLATE_NOOP("gdnc-core", "Specify configuration file (default: %s)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Specify data directory"),
    QT_TRANSLATE_NOOP("gdnc-core", "Specify masternode configuration file (default: %s)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Specify pid file (default: %s)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Specify wallet file (within data directory)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Specify your own public address"),
    QT_TRANSLATE_NOOP("gdnc-core", "Spend unconfirmed change when sending transactions (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Stop running after importing blocks from disk (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Submitted following entries to masternode: %u / %d"),
    QT_TRANSLATE_NOOP("gdnc-core", "Submitted to masternode, waiting for more entries ( %u / %d ) %s"),
    QT_TRANSLATE_NOOP("gdnc-core", "Submitted to masternode, waiting in queue %s"),
    QT_TRANSLATE_NOOP("gdnc-core", "InstantX options:"),
    QT_TRANSLATE_NOOP("gdnc-core", "Synchronization failed"),
    QT_TRANSLATE_NOOP("gdnc-core", "Synchronization finished"),
    QT_TRANSLATE_NOOP("gdnc-core", "Synchronization pending..."),
    QT_TRANSLATE_NOOP("gdnc-core", "Synchronizing budgets..."),
    QT_TRANSLATE_NOOP("gdnc-core", "Synchronizing masternode winners..."),
    QT_TRANSLATE_NOOP("gdnc-core", "Synchronizing masternodes..."),
    QT_TRANSLATE_NOOP("gdnc-core", "Synchronizing sporks..."),
    QT_TRANSLATE_NOOP("gdnc-core", "This help message"),
    QT_TRANSLATE_NOOP("gdnc-core", "This is experimental software."),
    QT_TRANSLATE_NOOP("gdnc-core", "This is intended for regression testing tools and app development."),
    QT_TRANSLATE_NOOP("gdnc-core", "This is not a Masternode."),
    QT_TRANSLATE_NOOP("gdnc-core", "Threshold for disconnecting misbehaving peers (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Transaction amount too small"),
    QT_TRANSLATE_NOOP("gdnc-core", "Transaction amounts must be positive"),
    QT_TRANSLATE_NOOP("gdnc-core", "Transaction created successfully."),
    QT_TRANSLATE_NOOP("gdnc-core", "Transaction fees are too high."),
    QT_TRANSLATE_NOOP("gdnc-core", "Transaction not valid."),
    QT_TRANSLATE_NOOP("gdnc-core", "Transaction too large for fee policy"),
    QT_TRANSLATE_NOOP("gdnc-core", "Transaction too large"),
    QT_TRANSLATE_NOOP("gdnc-core", "Transmitting final transaction."),
    QT_TRANSLATE_NOOP("gdnc-core", "Unable to bind to %s on this computer (bind returned error %s)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Unable to sign spork message, wrong key?"),
    QT_TRANSLATE_NOOP("gdnc-core", "Unknown network specified in -onlynet: '%s'"),
    QT_TRANSLATE_NOOP("gdnc-core", "Unknown state: id = %u"),
    QT_TRANSLATE_NOOP("gdnc-core", "Upgrade wallet to latest format"),
    QT_TRANSLATE_NOOP("gdnc-core", "Use KeePass 2 integration using KeePassHttp plugin (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Use N separate masternodes to anonymize funds  (2-8, default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Use OpenSSL (https) for JSON-RPC connections"),
    QT_TRANSLATE_NOOP("gdnc-core", "Use UPnP to map the listening port (default: %u)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Use UPnP to map the listening port (default: 1 when listening)"),
    QT_TRANSLATE_NOOP("gdnc-core", "Use the test network"),
    QT_TRANSLATE_NOOP("gdnc-core", "Username for JSON-RPC connections"),
    QT_TRANSLATE_NOOP("gdnc-core", "Value more than -------- pool maximum allows."),
    QT_TRANSLATE_NOOP("gdnc-core", "Verifying blocks..."),
    QT_TRANSLATE_NOOP("gdnc-core", "Verifying wallet..."),
    QT_TRANSLATE_NOOP("gdnc-core", "Wallet %s resides outside data directory %s"),
    QT_TRANSLATE_NOOP("gdnc-core", "Wallet is locked."),
    QT_TRANSLATE_NOOP("gdnc-core", "Wallet needed to be rewritten: restart Guardian Core to complete"),
    QT_TRANSLATE_NOOP("gdnc-core", "Wallet options:"),
    QT_TRANSLATE_NOOP("gdnc-core", "Wallet window title"),
    QT_TRANSLATE_NOOP("gdnc-core", "Warning"),
    QT_TRANSLATE_NOOP("gdnc-core", "Warning: This version is obsolete, upgrade required!"),
    QT_TRANSLATE_NOOP("gdnc-core", "Warning: Unsupported argument -benchmark ignored, use -debug=bench."),
    QT_TRANSLATE_NOOP("gdnc-core", "Warning: Unsupported argument -debugnet ignored, use -debug=net."),
    QT_TRANSLATE_NOOP("gdnc-core", "Will retry..."),
    QT_TRANSLATE_NOOP("gdnc-core", "You need to rebuild the database using -reindex to change -txindex"),
    QT_TRANSLATE_NOOP("gdnc-core", "Your entries added successfully."),
    QT_TRANSLATE_NOOP("gdnc-core", "Your transaction was accepted into the pool!"),
    QT_TRANSLATE_NOOP("gdnc-core", "Zapping all transactions from wallet..."),
    QT_TRANSLATE_NOOP("gdnc-core", "on startup"),
    QT_TRANSLATE_NOOP("gdnc-core", "wallet.dat corrupt, salvage failed"),
};