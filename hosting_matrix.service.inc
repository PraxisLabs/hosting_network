<?php

/**
 * The base service type class , registered with hook_hosting_service_type.
 */
class hostingService_matrix_client extends hostingService {
  public $service = 'matrix_client';
}

class hostingService_matrix_client_hostmaster extends hostingService_matrix_client {
  /**
   *   the value stored in the type column of the hosting_service table.
   */
  public $type = 'hostmaster';


  /**
   *   this service needs to have a port specified for it.
   */
  public $has_port = FALSE;
}

