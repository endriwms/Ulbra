using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using aula13_continuacaoEF.Domain.Entities;

namespace aula13_continuacaoEF.Domain.Interfaces
{
    public interface IPersonRepository : IBaseRepository<Person>
    {
        
    }
}