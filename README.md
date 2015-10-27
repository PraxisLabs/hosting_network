This module is in development. Its purpose is to allow inter-communication between Aegir servers (to address the "smart nodes" use case).

We use hosting\_services and 2-legged OAuth. You can use hosting\_network\_node to get the right OAuth configuration, afterwards you'll have to add an OAuth consumer to a user (presumably admin in development).

Right now the module doesn't actually do much (see the Aegir Network tab):
 * Provides a short task list and platform list for each network node.
 * Allows viewing the remote task log.
 * Provides a standarized feature for the remote server configuration (Aegir Network Node)
 * Provides a server type to register the OAuth Network Node server type.

Developped by gboudrias at [Praxis Labs](https://praxis.coop). Pull request welcome.
