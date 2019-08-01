

#include <QtGlobal>

// Automatically generated by extract_strings_qt.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *bitcoin_strings[] = {
    QT_TRANSLATE_NOOP("devault-core", "('DeVault Core',)"),
    QT_TRANSLATE_NOOP("devault-core", "('The %s developers',)"),
    QT_TRANSLATE_NOOP("devault-core", "('Bitcoin',)"),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "(1 = keep tx meta data e.g. account owner and payment "
                      "request information, 2 "
                      "= drop tx meta data)"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        ""
        "-maxtxfee is set very high! Fees this large could be paid on a single "
        "transaction."),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "A fee rate (in %s/kB) that will be used "
                                      "when fee estimation has insufficient "
                                      "data (default: %s)"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        ""
        "Accept connections from outside (default: 1 if no -proxy or -connect/-"
        "noconnect)"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "Accept relayed transactions received "
                                      "from whitelisted peers even when not "
                                      "relaying transactions (default: %d)"),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "Add a node to connect to and attempt to keep the "
                      "connection open (see the "
                      "`addnode` RPC command help for more info)"),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "Allow JSON-RPC connections from specified source. Valid "
                      "for <ip> are a "
                      "single IP (e.g. 1.2.3.4), a network/netmask (e.g. "
                      "1.2.3.4/255.255.255.0) or "
                      "a network/CIDR (e.g. 1.2.3.4/24). This option can be "
                      "specified multiple times"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "Bind to given address and always listen "
                                      "on it. Use [host]:port notation for "
                                      "IPv6"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "Bind to given address and whitelist "
                                      "peers connecting to it. Use [host]:port "
                                      "notation for IPv6"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "Bind to given address to listen for "
                                      "JSON-RPC connections. Use [host]:port "
                                      "notation for IPv6. This option can be "
                                      "specified multiple times (default: "
                                      "bind to all interfaces)"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "Cannot obtain a lock on data directory "
                                      "%s. %s is probably already running."),
    QT_TRANSLATE_NOOP(
        "devault-core",
        ""
        "Cannot provide specific connections and have addrman find outgoing "
        "connections at the same."),
    QT_TRANSLATE_NOOP(
        "devault-core",
        ""
        "Connect only to the specified node(s); -connect=0 disables automatic "
        "connections (the rules for this peer are the same as for -addnode)"),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "Create new files with system default permissions, "
                      "instead of umask 077 (only "
                      "effective with disabled wallet functionality)"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        ""
        "Delete all wallet transactions and only recover those parts of the "
        "blockchain through -rescan on startup"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "Discover own IP addresses (default: 1 "
                                      "when listening and no -externalip or -"
                                      "proxy)"),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "Distributed under the MIT software license, see the "
                      "accompanying file %s or "
                      "%s"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "Do not keep transactions in the mempool "
                                      "longer than <n> hours (default: %u)"),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "Equivalent bytes per sigop in transactions for relay "
                      "and mining (default: %u)"),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "Error loading wallet %s. -wallet parameter must only "
                      "specify a filename (not "
                      "a path)."),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "Error reading %s! All keys read correctly, but "
                      "transaction data or address "
                      "book entries might be missing or incorrect."),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "Error: Listening for incoming connections failed "
                      "(listen returned error %s)"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "Exclude debugging information for a "
                                      "category. Can be used in conjunction "
                                      "with -debug=1 to output debug logs for "
                                      "all categories except one or more "
                                      "specified categories."),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "Execute command when a relevant alert is received or we "
                      "see a really long "
                      "fork (%s in cmd is replaced by message)"),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "Execute command when a wallet transaction changes (%s "
                      "in cmd is replaced by "
                      "TxID)"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "Execute command when the best block "
                                      "changes (%s in cmd is replaced by block "
                                      "hash)"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "Extra transactions to keep in memory "
                                      "for compact block reconstructions "
                                      "(default: %u)"),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "Fees (in %s/kB) smaller than this are considered zero "
                      "fee for relaying, "
                      "mining and transaction creation (default: %s)"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        ""
        "Fees (in %s/kB) to charge per utxo created for relaying, and mining "
        "(default: %s)"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "Force relay of transactions from "
                                      "whitelisted peers even if they violate "
                                      "local relay policy (default: %d)"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "How thorough the block verification of "
                                      "-checkblocks is (0-4, default: %u)"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "If <category> is not supplied or if "
                                      "<category> = 1, output all debugging "
                                      "information."),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "If specified, debug log file older than "
                                      "<days> days will be deleted where "
                                      "days must be 1 or more, otherwise log "
                                      "files older than %d days will be "
                                      "deleted"),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "If this block is in the chain assume that it and its "
                      "ancestors are valid and "
                      "potentially skip their script verification (0 to verify "
                      "all, default: %s, "
                      "testnet: %s)"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "In order to activate address indexing "
                                      "(-addressindex) the current blockchain "
                                      "files (blocks & chainstate folders) "
                                      "must be removed. DO NOT remove your "
                                      "'wallets' folders or wallet.dat file"),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "Invalid amount for -maxtxfee=<amount>: '%s' (must be at "
                      "least the minrelay "
                      "fee of %s to prevent stuck transactions)"),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "Maintain a full address index, used to query for the "
                      "balance, txids and "
                      "unspent outputs for addresses (default: %u)"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "Maintain a full spent index, used to "
                                      "query the spending txid and input index "
                                      "for an outpoint (default: %u)"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "Maintain a full transaction index, used "
                                      "by the getrawtransaction rpc call "
                                      "(default: %d)"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "Maintain a timestamp index for block "
                                      "hashes, used to query blocks hashes by "
                                      "a range of timestamps (default: %u)"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "Max generated block size (blockmaxsize) "
                                      "cannot exceed the excessive block "
                                      "size (excessiveblocksize)"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        ""
        "Maximum allowed median peer time offset adjustment. Local perspective "
        "of "
        "time may be influenced by peers forward or backward by this amount. "
        "(default: %u seconds)"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        ""
        "Maximum size of data in data carrier transactions we relay and mine "
        "(default: %u)"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "Maximum total fees (in %s) to use in a "
                                      "single wallet transaction or raw "
                                      "transaction; setting this too low may "
                                      "abort large transactions (default: %s)"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "Number of seconds to keep misbehaving "
                                      "peers from reconnecting (default: %u)"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "Output debugging information (default: "
                                      "%u, supplying <category> is optional)"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "Please check that your computer's date "
                                      "and time are correct! If your clock "
                                      "is wrong, %s will not work properly."),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "Please contribute if you find %s useful. Visit %s for "
                      "further information "
                      "about the software."),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "Prune configured below the minimum of "
                                      "%d MiB.  Please use a higher number."),
    QT_TRANSLATE_NOOP(
        "devault-core",
        ""
        "Prune: last wallet synchronisation goes beyond pruned data. You need "
        "to -"
        "reindex (download the whole blockchain again in case of pruned node)"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "Query for peer addresses via DNS "
                                      "lookup, if low on addresses (default: 1 "
                                      "unless -connect/-noconnect)"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "Randomize credentials for every proxy "
                                      "connection. This enables Tor stream "
                                      "isolation (default: %d)"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        ""
        "Reduce storage requirements by enabling pruning (deleting) of old "
        "blocks. "
        "This allows the pruneblockchain RPC to be called to delete specific "
        "blocks, "
        "and enables automatic pruning of old blocks if a target size in MiB "
        "is "
        "provided. This mode is incompatible with -txindex and -rescan. "
        "Warning: "
        "Reverting this setting requires re-downloading the entire blockchain. "
        "(default: 0 = disable pruning blocks, 1 = allow manual pruning via "
        "RPC, >%u "
        "= automatically prune block files to stay under the specified target "
        "size in "
        "MiB)"),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "Rescans are not possible in pruned mode. You will need "
                      "to use -reindex which "
                      "will download the whole blockchain again."),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "Set lowest fee rate (in %s/kB) for "
                                      "transactions to be included in block "
                                      "creation. (default: %s)"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        ""
        "Set maximum percentage of a block reserved to high-priority/low-fee "
        "transactions (default: %d)"),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "Set the number of script verification threads (%u to "
                      "%d, 0 = auto, <0 = "
                      "leave that many cores free, default: %d)"),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "Specify additional configuration file, relative to the "
                      "-datadir path (only "
                      "useable from configuration file, not command line)"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "Specify directory to hold blocks "
                                      "subdirectory for *.dat files (default: "
                                      "<datadir>)"),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "Specify directory to hold wallets (default: "
                      "<datadir>/wallets if it exists, "
                      "otherwise <datadir>)"),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "Specify location of debug log file: this can be an "
                      "absolute path or a path "
                      "relative to the data directory (default: %s)"),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "Support filtering of blocks and transaction with bloom "
                      "filters (default: %d)"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "The block database contains a block "
                                      "which appears to be from the future. "
                                      "This may be due to your computer's date "
                                      "and time being set incorrectly. Only "
                                      "rebuild the block database if you are "
                                      "sure that your computer's date and "
                                      "time are correct"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "The transaction amount is too small to "
                                      "send after the fee has been deducted"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "This is a pre-release test build - use "
                                      "at your own risk - do not use for "
                                      "mining or merchant applications"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "This is the transaction fee you may pay "
                                      "when fee estimates are not available."),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "This product includes cryptographic "
                                      "software written by Eric Young and UPnP "
                                      "software written by Thomas Bernard."),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "Total length of network version string (%i) exceeds "
                      "maximum length (%i). "
                      "Reduce the number or size of uacomments."),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "Tries to keep outbound traffic under "
                                      "the given target (in MiB per 24h), 0 = "
                                      "no limit (default: %d)"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        ""
        "Unable to replay blocks. You will need to rebuild the database using -"
        "reindex-chainstate."),
    QT_TRANSLATE_NOOP(
        "devault-core",
        ""
        "Unable to rewind the database to a pre-fork state. You will need to "
        "redownload the blockchain"),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "Unsupported argument -socks found. Setting SOCKS "
                      "version isn't possible "
                      "anymore, only SOCKS5 proxies are supported."),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "Unsupported argument -whitelistalwaysrelay ignored, use "
                      "-whitelistrelay and/"
                      "or -whitelistforcerelay."),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "Use UPnP to map the listening port (default: 1 when "
                      "listening and no -proxy)"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "Use separate SOCKS5 proxy to reach "
                                      "peers via Tor hidden services (default: "
                                      "%s)"),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "Username and hashed password for JSON-RPC connections. "
                      "The field <userpw> "
                      "comes in the format: <USERNAME>:<SALT>$<HASH>. A "
                      "canonical python script is "
                      "included in share/rpcuser. The client then connects "
                      "normally using the "
                      "rpcuser=<USERNAME>/rpcpassword=<PASSWORD> pair of "
                      "arguments. This option can "
                      "be specified multiple times"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        ""
        "Wallet will not create transactions that violate mempool chain limits "
        "(default: %d)"),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "Warning: The network does not appear to "
                                      "fully agree! Some miners appear to "
                                      "be experiencing issues."),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "Warning: Wallet file corrupt, data salvaged! Original "
                      "%s saved as %s in %s; "
                      "if your balance or transactions are incorrect you "
                      "should restore from a "
                      "backup."),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "Warning: We do not appear to fully agree with our "
                      "peers! You may need to "
                      "upgrade, or other nodes may need to upgrade."),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "Whether to save the mempool on shutdown "
                                      "and load on restart (default: %u)"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        ""
        "Whitelist peers connecting from the given IP address (e.g. 1.2.3.4) "
        "or CIDR "
        "notated network (e.g. 1.2.3.0/24). Can be specified multiple times."),
    QT_TRANSLATE_NOOP("devault-core", ""
                                      "Whitelisted peers cannot be DoS banned "
                                      "and their transactions are always "
                                      "relayed, even if they are already in "
                                      "the mempool, useful e.g. for a gateway"),
    QT_TRANSLATE_NOOP("devault-core",
                      ""
                      "You need to rebuild the database using -reindex to go "
                      "back to unpruned "
                      "mode.  This will redownload the entire blockchain"),
    QT_TRANSLATE_NOOP("devault-core", "%s corrupt, salvage failed"),
    QT_TRANSLATE_NOOP("devault-core", "%s is set very high!"),
    QT_TRANSLATE_NOOP("devault-core", "(default: %d)"),
    QT_TRANSLATE_NOOP("devault-core", "(default: %s)"),
    QT_TRANSLATE_NOOP("devault-core", "-maxmempool must be at least %d MB"),
    QT_TRANSLATE_NOOP("devault-core", "<category> can be:"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Accept command line and JSON-RPC commands"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Accept public REST requests (default: %d)"),
    QT_TRANSLATE_NOOP("devault-core", "Adding keys... (%3.2f %%, %d us)"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Allow DNS lookups for -addnode, -seednode and -connect"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Always query for peer addresses via DNS lookup (default: %d)"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Append comment to the user agent string"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Attempt to recover private keys from a corrupt wallet on startup"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Automatically create Tor hidden service (default: %d)"),
    QT_TRANSLATE_NOOP("devault-core", "Block creation options:"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Block priority percentage has to belong to the [0..100] interval."),
    QT_TRANSLATE_NOOP("devault-core", "Cannot downgrade wallet"),
    QT_TRANSLATE_NOOP("devault-core", "Cannot resolve -%s address: '%s'"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Cannot write to data directory '%s'; check permissions."),
    QT_TRANSLATE_NOOP("devault-core", "Chain selection options:"),
    QT_TRANSLATE_NOOP("devault-core", "Change index out of range"),
    QT_TRANSLATE_NOOP("devault-core", "Commands:"),
    QT_TRANSLATE_NOOP("devault-core", "Connect through SOCKS5 proxy"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Connect to a node to retrieve peer addresses, and disconnect"),
    QT_TRANSLATE_NOOP("devault-core", "Connection options:"),
    QT_TRANSLATE_NOOP("devault-core", "Copyright (C) %i-%i"),
    QT_TRANSLATE_NOOP("devault-core", "Copyright (C) 2019"),
    QT_TRANSLATE_NOOP("devault-core", "Corrupted block database detected"),
    QT_TRANSLATE_NOOP("devault-core", "Debugging/Testing options:"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Do not accept blocks larger than this limit, in bytes (default: %d)"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Do not load the wallet and disable wallet RPC calls"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Do you want to rebuild the block database now?"),
    QT_TRANSLATE_NOOP("devault-core", "Done loading"),
    QT_TRANSLATE_NOOP("devault-core", "Enable publish hash block in <address>"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Enable publish hash transaction in <address>"),
    QT_TRANSLATE_NOOP("devault-core", "Enable publish raw block in <address>"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Enable publish raw transaction in <address>"),
    QT_TRANSLATE_NOOP("devault-core", "Error initializing block database"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Error initializing wallet database environment %s!"),
    QT_TRANSLATE_NOOP("devault-core", "Error loading %s"),
    QT_TRANSLATE_NOOP("devault-core", "Error loading %s: Wallet corrupted"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Error loading %s: Wallet requires newer version of %s"),
    QT_TRANSLATE_NOOP("devault-core", "Error loading block database"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Error loading wallet %s. -wallet filename must be a regular file."),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Error loading wallet %s. Duplicate -wallet filename specified."),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Error loading wallet %s. Invalid characters in -wallet filename."),
    QT_TRANSLATE_NOOP("devault-core", "Error opening block database"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Error reading from database, shutting down."),
    QT_TRANSLATE_NOOP("devault-core", "Error upgrading chainstate database"),
    QT_TRANSLATE_NOOP("devault-core", "Error"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Error: A fatal internal error occurred, see debug.log for details"),
    QT_TRANSLATE_NOOP("devault-core", "Error: Disk space is low for %s"),
    QT_TRANSLATE_NOOP("devault-core", "Error: Disk space is low!"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Excessive block size must be > 1,000,000 bytes (1MB)"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Failed to listen on any port. Use -listen=0 if you want this."),
    QT_TRANSLATE_NOOP("devault-core",
                      "Failed to rescan the wallet during initialization"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Fee (in %s/kB) to add to transactions you send (default: %s)"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "How many blocks to check at startup (default: %u, 0 = all)"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Imports blocks from external blk000??.dat file on startup"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Include IP addresses in debug output (default: %d)"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Incorrect or no genesis block found. Wrong datadir for network?"),
    QT_TRANSLATE_NOOP("devault-core", "Information"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Initialization sanity check failed. %s is shutting down."),
    QT_TRANSLATE_NOOP("devault-core", "Insufficient funds"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Invalid -onion address or hostname: '%s'"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Invalid -proxy address or hostname: '%s'"),
    QT_TRANSLATE_NOOP("devault-core", "Invalid Seed Phrase"),
    QT_TRANSLATE_NOOP("devault-core", "Invalid amount for -%s=<amount>: '%s'"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Invalid amount for -fallbackfee=<amount>: '%s'"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Invalid netmask specified in -whitelist: '%s'"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Keep at most <n> unconnectable transactions in memory (default: %u)"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Keep the transaction memory pool below <n> megabytes (default: %u)"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Keypool ran out, please call keypoolrefill first"),
    QT_TRANSLATE_NOOP("devault-core", "Listen for JSON-RPC connections on "
                                      "<port> (default: %u or testnet: %u)"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Listen for connections on <port> (default: %u or testnet: %u)"),
    QT_TRANSLATE_NOOP("devault-core", "Loading P2P addresses..."),
    QT_TRANSLATE_NOOP("devault-core", "Loading banlist..."),
    QT_TRANSLATE_NOOP("devault-core", "Loading block index..."),
    QT_TRANSLATE_NOOP("devault-core", "Loading wallet..."),
    QT_TRANSLATE_NOOP("devault-core",
                      "Location of the auth cookie (default: data dir)"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Maintain at most <n> connections to peers (default: %u)"),
    QT_TRANSLATE_NOOP("devault-core", "Make the wallet broadcast transactions"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Need to specify a port with -whitebind: '%s'"),
    QT_TRANSLATE_NOOP("devault-core", "Node relay options:"),
    QT_TRANSLATE_NOOP("devault-core", "Not enough file descriptors available."),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
    QT_TRANSLATE_NOOP("devault-core", "Options:"),
    QT_TRANSLATE_NOOP("devault-core", "Password for JSON-RPC connections"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Prepend debug output with timestamp (default: %d)"),
    QT_TRANSLATE_NOOP("devault-core", "Print this help message and exit"),
    QT_TRANSLATE_NOOP("devault-core", "Print version and exit"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Prune cannot be configured with a negative value."),
    QT_TRANSLATE_NOOP("devault-core",
                      "Prune mode is incompatible with -txindex."),
    QT_TRANSLATE_NOOP("devault-core", "Pruning blockstore..."),
    QT_TRANSLATE_NOOP("devault-core", "RPC server options:"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Rebuild chain state and block index from the blk*.dat files on disk"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Rebuild chain state from the currently indexed blocks"),
    QT_TRANSLATE_NOOP("devault-core", "Reducing -maxconnections from %d to %d, "
                                      "because of system limitations."),
    QT_TRANSLATE_NOOP("devault-core", "Register Commands:"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Relay and mine data carrier transactions (default: %d)"),
    QT_TRANSLATE_NOOP("devault-core", "Relay non-P2SH multisig (default: %d)"),
    QT_TRANSLATE_NOOP("devault-core", "Replaying blocks..."),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Rescan the block chain for missing wallet transactions on startup"),
    QT_TRANSLATE_NOOP("devault-core", "Rescanning..."),
    QT_TRANSLATE_NOOP("devault-core", "Rewinding blocks..."),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Send trace/debug info to console instead of debug.log file"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Set database cache size in megabytes (%d to %d, default: %d)"),
    QT_TRANSLATE_NOOP("devault-core", "Set key pool size to <n> (default: %u)"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Set maximum block size in bytes (default: %d)"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Set the number of threads to service RPC calls (default: %d)"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Show all debugging options (usage: --help -help-debug)"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Shrink debug.log file on client startup (default: 1 when no -debug)"),
    QT_TRANSLATE_NOOP("devault-core", "Signing transaction failed"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Specified -walletdir \"%s\" does not exist"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Specified -walletdir \"%s\" is a relative path"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Specified -walletdir \"%s\" is not a directory"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Specified blocks directory \"%s\" does not exist.\n"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Specify 12-word seed phrase for wallet on 1st run (only)"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Specify configuration file (default: %s)"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
    QT_TRANSLATE_NOOP("devault-core", "Specify data directory"),
    QT_TRANSLATE_NOOP("devault-core", "Specify pid file (default: %s)"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Specify wallet file (within data directory)"),
    QT_TRANSLATE_NOOP("devault-core", "Specify your own public address"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Spend unconfirmed change when sending transactions (default: %d)"),
    QT_TRANSLATE_NOOP("devault-core", "Starting network threads..."),
    QT_TRANSLATE_NOOP("devault-core", "The source code is available from %s."),
    QT_TRANSLATE_NOOP("devault-core",
                      "The transaction amount is too small to pay the fee"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "The wallet will avoid paying less than the minimum relay fee."),
    QT_TRANSLATE_NOOP("devault-core", "This is experimental software."),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "This is the transaction fee you will pay if you send a transaction."),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Threshold for disconnecting misbehaving peers (default: %u)"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Tor control port password (default: empty)"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Tor control port to use if onion listening enabled (default: %s)"),
    QT_TRANSLATE_NOOP("devault-core", "Transaction amount too small"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Transaction amounts must not be negative"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Transaction fee and change calculation failed"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Transaction has too long of a mempool chain"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Transaction must have at least one recipient"),
    QT_TRANSLATE_NOOP("devault-core", "Transaction too large for fee policy"),
    QT_TRANSLATE_NOOP("devault-core", "Transaction too large"),
    QT_TRANSLATE_NOOP("devault-core", "UI Options:"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Unable to bind to %s on this computer (bind returned error %s)"),
    QT_TRANSLATE_NOOP("devault-core", "Unable to bind to %s on this computer. "
                                      "%s is probably already running."),
    QT_TRANSLATE_NOOP("devault-core", "Unable to generate initial keys"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Unable to start HTTP server. See debug log for details."),
    QT_TRANSLATE_NOOP("devault-core",
                      "Unknown network specified in -onlynet: '%s'"),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Unsupported argument -benchmark ignored, use -debug=bench."),
    QT_TRANSLATE_NOOP(
        "devault-core",
        "Unsupported argument -debugnet ignored, use -debug=net."),
    QT_TRANSLATE_NOOP("devault-core",
                      "Unsupported argument -tor found, use -onion."),
    QT_TRANSLATE_NOOP("devault-core", "Unsupported logging category %s=%s."),
    QT_TRANSLATE_NOOP("devault-core",
                      "Upgrade wallet to latest format on startup"),
    QT_TRANSLATE_NOOP("devault-core", "Upgrading UTXO database"),
    QT_TRANSLATE_NOOP("devault-core", "Upgrading txindex database"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Use UPnP to map the listening port (default: %u)"),
    QT_TRANSLATE_NOOP("devault-core", "Use the test chain"),
    QT_TRANSLATE_NOOP("devault-core",
                      "User Agent comment (%s) contains unsafe characters."),
    QT_TRANSLATE_NOOP("devault-core", "Username for JSON-RPC connections"),
    QT_TRANSLATE_NOOP("devault-core", "Verifying blocks..."),
    QT_TRANSLATE_NOOP("devault-core", "Verifying wallet(s)..."),
    QT_TRANSLATE_NOOP("devault-core",
                      "Wallet %s resides outside wallet directory %s"),
    QT_TRANSLATE_NOOP("devault-core", "Wallet debugging/testing options:"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Wallet needed to be rewritten: restart %s to complete"),
    QT_TRANSLATE_NOOP("devault-core", "Wallet options:"),
    QT_TRANSLATE_NOOP("devault-core", "Warning"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Whether to operate in a blocks only mode (default: %d)"),
    QT_TRANSLATE_NOOP("devault-core",
                      "Zapping all transactions from wallet..."),
    QT_TRANSLATE_NOOP("devault-core", "ZeroMQ notification options:"),
};
