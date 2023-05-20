using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using aula14_repositorios.Domain.Entities;

namespace aula14_repositorios.Domain.Interfaces
{
    public interface IPersonRepository : IBaseRepository<Person>
    {
        
    }
}